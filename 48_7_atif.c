#include<stdio.h>
int  identialOrNot(int arr1[],int len1,int arr2[],int len2){
    if(len1!=len2){
        return 0;
    }
    for(int i=0;i<len1;i++){
        if(arr1[i]!=arr2[i]){
            return 0;
        }
    }

    return 1;
}
int main(){
    int len1,len2;
    // input length for 1st array
    printf("Enter the number of elements for array1:");
    scanf("%d",&len1);
    int arr1[len1];
    // defining array 1 by dynamically
    // input values for array1
    for(int i=0;i<len1;i++){
        printf("Enter  value:\n");
        scanf("%d",&arr1[i]);
    }
    // input length for 2nd array
    printf("Enter the number of elements for array2:\n");
    scanf("%d",&len2);
    int arr2[len2];
    // defining array 2 by dynamically
    // input values for array2
    for(int i=0;i<len2;i++){
        printf("Enter  value:\n");
        scanf("%d",&arr2[i]);
    }

    if(identialOrNot(arr1,len1,arr2,len2)){
        printf("Both the arrays are identical\n");
    }
    else{
        printf("Both the arrays are not identical\n");
    }

}
