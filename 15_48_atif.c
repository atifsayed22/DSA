#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};
struct node*getnode(){
    return (struct node*)malloc(sizeof(struct node));
}
struct node *top=0,*newnode,*temp;
void push(int x){
    newnode=getnode();

    newnode->data=x;
    newnode->next=top;
    top=newnode;
    
}
void pop(){
    if(top==0){
        printf("linked list is empty");
    }
    else{
        temp=top;
        printf(" %d deleted",temp->data);
        top=top->next;
        free(temp);
    }
}
void display() {
     temp = top; // Define temp as a local pointer variable

    if (temp == 0) { // Check if the list is empty
        printf("The list is empty.\n");
        return;
    }

    while (temp != 0) { // Traverse the list until the end
        printf(" %d ", temp->data); // Print the data of the current node
        temp = temp->next; // Move to the next node
    }
    printf("\n"); // Newline for better output formatting
}
int main(){
    
    int choice,n;
    while(1){
        printf("\n---linked list  OPERATION--");
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
            push(n);
            break;
        case 2:
            pop();
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