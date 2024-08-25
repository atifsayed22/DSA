#include<stdio.h>
#include<stdlib.h>

int que[5];
int f=-1,r=-1;

void add(int x){

    if(f==(r+1)%5){
        printf("Circular que is full!");
    }
    else{
        if(f==-1&&r==-1){
            f=0;
            r=0;
            que[r]=x;
        }
        else{
            r=(r+1)%5;
            que[r]=x;
        }
    }

}
void delete(){
    if(f==-1&&r==-1){
        printf("\n Circular Que is EMPTY!");
    }
    else{
       
        if(f==r){
            f=-1;
            r=-1;
        }
        else{
            printf("\n%d is deleted",que[f]);
            f=(f+1)%5;
        }
    }

}
void display() {
    if (f == -1) {
        printf("\nCircular queue is EMPTY!");
        return;
    }
    
    else{
        for(int i=f;i!=r;i=(i+1)%5){
            printf(" %d ",que[i]);
        }
        printf(" %d ",que[r]);
    }
}
int main(){
    int choice,n;
    while(1){
        printf("\n---CIRCULAR QUE OPERATION--");
        printf("\n 1. Add element to que");
        printf("\n 2. delete element from que");
        printf("\n 3. display que");
        printf("\n 4. Exit");
        printf("\n Enter you choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\n Enter the element you want to add in que:");
            scanf("%d",&n);
            add(n);
            break;
        case 2:
            delete();
            break;
        
        case 3:
            display();
            break;
        case 4:
            exit(1);
            break;
        
        default:
            printf("\n please enter a Valid choice!");
            break;
        }
    }

    return 0;
}