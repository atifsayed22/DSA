#include<stdio.h>
int main(){
  int len1,len2;
    int len,temp;
    printf("Enter the number of elements for array1:");
    scanf("%d",&len);
    int arr[len];
   
    for(int i=0;i<len;i++){
        printf("Enter  value:\n");
        scanf("%d",&arr[i]);
    }


    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];//temp=5
                arr[j]=arr[j+1];//arr[1]=5
                arr[j+1]=temp;//arr[j]=5
            }

        }
    }
    printf("The largest Element in the arry is :%d\n",arr[len-1]);
}