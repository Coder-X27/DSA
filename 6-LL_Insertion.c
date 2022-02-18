#include <stdio.h>
#include <stdlib.h>
// Creation of a node
typedef struct Node
{
    int data;
    struct Node *next;
} ks;

void linkedListTraversal(ks *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
// INSERT A NODE IN A LINKED LIST AT FIRST POSITION

ks *insertAtFirst(ks *head, int data)
{
    ks *ptr = (ks *)malloc(sizeof(ks));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

// INSERT A NODE IN A LINKED LIST AT A PARTICULAR LOCATION
ks *insertAtIndex(ks *head, int data, int index)
{
    ks *ptr = (ks *)malloc(sizeof(ks));
    ks *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
ks *insertAtEnd(ks *head, int data)
{
    ks *ptr = (ks *)malloc(sizeof(ks));
    ptr->data = data;
    ks *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
ks *insertAfterNode(ks *head, ks *prevNode, int data)
{
    ks *ptr = (ks *)malloc(sizeof(ks));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
}

int main()
{

    ks *head;
    ks *second;
    ks *third;
    // Allocating Memory to all the nodes
    head = (ks *)malloc(sizeof(ks));
    second = (ks *)malloc(sizeof(ks));
    third = (ks *)malloc(sizeof(ks));
    // linking all the nodes with each other
    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 31;
    third->next = NULL;
    // Traversing a list
    printf("Traversing a list\n");
    linkedListTraversal(head);

    // Inserting an element in first position
    printf("\nInserting an element at first position\n");
    head = insertAtFirst(head, 55);
    linkedListTraversal(head);

    // Inserting an element at a particular index
    printf("\nInserting an element at particular index\n");
    head = insertAtIndex(head, 555, 1);
    linkedListTraversal(head);

    // Inserting and element at last index
    printf("\nInserting an element at last index\n");
    head = insertAtEnd(head, 22);
    linkedListTraversal(head);

    // Inserting an element after a Node
    printf("\nInserting an element after a Node\n");
    head = insertAfterNode(head, third, 100);
    linkedListTraversal(head);

    return 0;
}