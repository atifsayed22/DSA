#include<stdio.h>

int main(){

int a=0,b=1,f=0,n;
printf("Enter number to check :");
scanf("%d",&n);
int arr[n];
int i=0;

if(n==1 || n==0){
    printf("%d is a part of fibonacci number ",n);
}

while(f<n){
    printf(" %d ",a);
    f=a+b;
    a=b;
    b=f;
    

}
if(f==n){
    printf("\n%d is a part of fibonacci number \n",n);
}
else {
    printf("\n%d is not a part of fibonacci number\n ",n);

}



}