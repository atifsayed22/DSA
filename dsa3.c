#include<stdio.h>

struct student
{
    int rollno;
    char name[50];
    float percentage;
};

int main(){

    struct student temp;
    struct student students[]={
        
        {45,"Atif",89},
        {30,"sabiq",78},
        {45,"rayyan",87},
        {8,"ibrahim",95}

    };
    int n=sizeof(students)/sizeof(students[0]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(students[j].percentage>students[j+1].percentage){
                temp=students[j+1];
                students[j+1]=students[j];
                students[j]=temp;
            }
        }
    }
    printf("Sorted list of students by Percentage:\n");
    for (int i = 0; i < n; i++) {
        printf("roll no: %d, Name: %s, percentage : %.2f\n", students[i].rollno, students[i].name, students[i].percentage);
    }

    return 0;

}
