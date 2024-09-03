#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * previous,*next;
};
struct node*getnode(){
    return (struct node*)malloc(sizeof(struct node));
}
struct node *head=0,*temp,*newnode,*temp2;

void insert(int x){
    newnode=getnode();
    newnode->data=x;
    newnode->next=0;
    if(head==0){
        newnode->previous=0;
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp2=temp;
        temp=newnode;
        temp->previous=temp2;
    }
}
void display(){
    if(head==0){
        printf("list is empty\n");
    }
    else{
        temp=head;
        while(temp!=0){
            printf(" %d <-> ",temp->data);
            temp=temp->next;
        }
        printf("NULL\n");
    }
}
int main(){
    int choice,n;
    while(1){
        printf("\n---linked list  OPERATION--");
        printf("\n 1. Add element to linked ");
        // printf("\n 2. delete element from que");
        // printf("\n 2. delete at end of linked lis");
        // printf("\n 3. delete at Front of linked lis");
        printf("\n 2. display");
        // printf("\n 5. reverse que");
        printf("\n 3. Exit");
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
            display();
            break;
        // case 3:
        //     deleteAtFront();
        //     break;
        
        // case 4:
        //     display();
        //     break;
        // case 5:
        //     reverse();
        //     break;
        // case 6:
        //     exit(1);
        //     break;
        
        default:
            printf("\n please enter a Valid choice!");
            break;
        }
    }

}
