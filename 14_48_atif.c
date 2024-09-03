#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;

};
struct Node * head=0;
struct Node*getnode(){
    return ((struct Node*)malloc(sizeof(struct Node)));
}
void freenode(struct Node*p){
    free(p);
}
struct Node *newnode,*temp,*previous,*current;
void insert(int x){
    newnode=getnode();
    newnode->data=x;
    newnode->next=0;
    if(head==0){
        head=temp=newnode;
       
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
}
void deleteAtEnd(){

    if(head==0){
        printf("list is empty!\n");

    }
    else if(head->next==0){
        printf(" %d is deleted\n",head->data);
        free(head);
    }
    temp=head;
    while(temp->next!=0){
        previous=temp;
        temp=temp->next;
    }
    printf(" %d is deleted\n",temp->data);
    previous->next=0;
    free(temp);
}
void deleteAtFront(){
    if(head==0){
        printf("Linked list is Empty ! ");
    }
    printf(" %d is deleted ",head->data);
    temp=head;
    head=head->next;
    free(temp);
}

void display() {
    struct Node* temp = head; // Define temp as a local pointer variable

    if (temp == 0) { // Check if the list is empty
        printf("The list is empty.\n");
        return;
    }

    while (temp != 0) { // Traverse the list until the end
        printf(" %d -> ", temp->data); // Print the data of the current node
        temp = temp->next; // Move to the next node
    }
    printf("NULL\n"); // Newline for better output formatting
}
void reverse(){
    previous=0;
    current=newnode=head;

    while(newnode!=0){
        newnode=newnode->next;
        current->next=previous;
        previous=current;
        current=newnode;
    }
    head=previous;
    display();
}


int main(){
    
    int choice,n;
    while(1){
        printf("\n---linked list  OPERATION--");
        printf("\n 1. Add element to linked ");
        // printf("\n 2. delete element from que");
        printf("\n 2. delete at end of linked lis");
        printf("\n 3. delete at Front of linked lis");
        printf("\n 4. display");
        printf("\n 5. reverse que");
        printf("\n 6. Exit");
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
            deleteAtEnd();
            break;
        case 3:
            deleteAtFront();
            break;
        
        case 4:
            display();
            break;
        case 5:
            reverse();
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