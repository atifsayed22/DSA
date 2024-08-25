#include<stdio.h>
#include<stdlib.h>
#define n 5

int que[n];
int r=-1,f=-1;

int  isFull(){
    if(f==(r+1)%5){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(){
    if(f==-1&&r==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void EnqueAtRear(int x){
    if(isFull()){
        printf("DEQ is Full!");
    }
    else{
        if(f==-1&&r==-1){
            f=0;
            r=0;
        }
        else{
            r=(r+1)%n;
            
        }
        que[r]=x;
    }
}
void dequeAtFront(){
    if(isEmpty()){
        printf("DEQ is Empty");
    }
    else{
        printf("\n%d Element is deleted\n",que[r]);
        if(f==r){
            f=-1;
            r=-1;
        }
        else{
            f=(f+1)%n;
        }
    }
}
void EnqueAtFront(int x){
    if(isFull()){
        printf("DEQ is Full!");
    }
    else{
        if(f==-1 && r==-1){
            f=0;
            r=0;
        }
        else if(f==0){
        f=n-1;
        }
        else{
            f--;
        }
        que[f]=x;
    }
}
void dequeAtRear(){
    if(isEmpty()){
        printf("DEQ is Empty!");
    }
    else{
        printf("\n%d Element is deleted\n",que[r]);
        if(r==f){
            f=-1;
            r=-1;
        }
       else if(r==0){
            r=n-1;
        }
        else{
            r--;
        }
    }

}
void Display(){
    if(isEmpty()){
        printf("DEQ is Empty");
    }
    else{
       int i=f;
       while(i!=r){
        printf(" %d ",que[i]);
        i=(i+1)%n;
       }
       printf(" %d ",que[r]);
    }
}

int main(){
    int choice,y;
    while(1){
        printf("\n--- DEQ OPERATION--");
        printf("\n 1. Enque at Rear");
        printf("\n 2. Deque at front");
        printf("\n 3. Enque at front");
        printf("\n 4. Deque at rear");
        printf("\n 5. Display");
        printf("\n 6. Exit");
        printf("\n Enter you choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\n Enter the element you want to add in que:");
            scanf("%d",&y);
            EnqueAtRear(y);
            break;
        case 2:
            dequeAtFront();
            break;
        
        case 3:
            printf("\n Enter the element you want to add in que:");
            scanf("%d",&y);
            EnqueAtFront(y);
            break;
        case 4:
            dequeAtRear();
            break;
        
        case 5:
            Display();
            break;
        case 6:
            exit(1);
            break;
        
        default:
            printf("\n please enter a Valid choice!");
            break;
        }
    }

    return 0;
}