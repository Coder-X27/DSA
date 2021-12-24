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

    linkedListTraversal(head);

    return 0;
}