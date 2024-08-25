#include<stdio.h>

int main(){
     int len1,len2;
    // input length for 1st array
    printf("Enter the number of elements for array1:");
    scanf("%d",&len1);
    int arr1[len1];
    for(int i=0;i<len1;i++){
        printf("Enter  value:");
        scanf("%d",&arr1[i]);
    }

    int el,isunique;
    int n = sizeof(arr1)/sizeof(arr1[0]);
    for(int i=0;i<len1;i++){
        isunique=1;
        for(int j=0; j<len1;j++){
            if(i!=j && arr1[i]==arr1[j]){
                
                isunique=0;
               break;
             
            }
        }
        if(isunique){
            printf(" %d ",arr1[i]);
        }
        // else{
        //     printf("no unique elemnent found\n");
        // }
    }
    // printf("Number of duplicate elment is :%d\n",count);
}