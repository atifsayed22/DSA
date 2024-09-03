#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};
struct Node*getnode(){
    return (struct Node*)malloc(sizeof(struct Node));
}

struct Node *head=0,*newnode,*temp;
struct Node *front=0,*rear=0;
void insert(int x){

    newnode=getnode();
    newnode->data=x;
    newnode->next=0;

    if(rear==0&&front==0){
        front=newnode;
        rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}
void delete(){
    if(front==0 && rear==0){
        printf("linked list is empty\n");
    }
    else{
        temp=front;
        printf(" %d is DELETED \n",temp->data);
       front=front->next;
       free(temp);


    }
}
void display(){
     if(front==0 && rear==0){
        printf("linked list is empty\n");
    }
    else{
        temp=front;
        while(temp!=0){
            printf(" %d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }

}
int main(){
    
    int choice,n;
    while(1){
        printf("\n---linked list  implentaion of QUE OPERATION--");
        printf("\n 1. push element to linked -list ");
        printf("\n 2. pop element from linked -list");
        printf("\n 3. dispaly ");
        printf("\n 4. Exit");
        printf("\n Enter you choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\n Enter the element you want to add in que:");
            scanf("%d",&n);
            insert(n);
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