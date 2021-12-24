#include<stdio.h>
#include<stdlib.h>
// Creation of a node
struct Node
{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;                          
    }
}
// INSERT A NODE IN A LINKED LIST AT FIRST POSITION 

struct Node * insertAtFirst(struct Node *head,int data){
    struct Node * ptr=(struct Node *) malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

// INSERT A NODE IN A LINKED LIST AT A PARTICULAR LOCATION
struct Node * insertAtIndex(struct Node *head,int data,int index){
    struct Node * ptr=(struct Node *) malloc(sizeof(struct Node));
    struct Node * p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

int main(){

    struct Node * head;
    struct Node * second;
    struct Node * third;
    // Allocating Memory to all the nodes
    head=(struct Node *) malloc(sizeof(struct Node));
    second=(struct Node *) malloc(sizeof(struct Node));
    third=(struct Node *) malloc(sizeof(struct Node));
    // linking all the nodes with each other 
    head->data=7;
    head->next=second;

    second->data=11;
    second->next=third;

    third->data=31;
    third->next=NULL;
    // Traversing a list 
    linkedListTraversal(head);

    // Inserting an element in first position
    head=insertAtFirst(head,55);
    linkedListTraversal(head);
    
    // Inserting an element at a particular index
    head=insertAtIndex(head,555,1);
    linkedListTraversal(head);
    return 0;
}