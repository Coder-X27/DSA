#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} ks;

void linkedListTraversal(struct Node *head){
    ks *ptr=head;
    printf("Element: %d\n",ptr->data);
    ptr=ptr->next;
    while(ptr!=head){
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
    third->next=head;

    linkedListTraversal(head);
    return 0;
}