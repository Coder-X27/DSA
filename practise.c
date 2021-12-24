#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

int traversal(struct Node * ptr){
    while (ptr!=NULL){
        printf("Element is : %d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;

    head=(struct Node *) malloc(sizeof(struct Node));
    second=(struct Node *) malloc(sizeof(struct Node));
    third=(struct Node *) malloc(sizeof(struct Node));

    head->data=7;
    head->next=second;

    second->data=27;
    second->next=third;

    third->data=31;
    third->next=NULL;

    traversal(head);

    return 0;
}