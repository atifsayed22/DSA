#include<stdio.h>
int main(){
    int len ;
    printf("Enter the number of elment u want to insert in the array:");
    scanf("%d",&len);
    int arr [len];
    for(int i =0 ;i<len;i++){
        printf("Enter %d value: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0 ; i<len-1;i++){
        for(int j = 0;j<len-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i = 0 ;i<len;i++){
        printf(" %d ",arr[i]);
    }
}