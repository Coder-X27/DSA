#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} k;

void linkedListTraversal(k *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
k *insertionAtFirst(k *head, int data)
{
    k *ptr = (k *)malloc(sizeof(k));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
k *insertionAtIndex(k *head, int data, int index)
{
    k *ptr = (k *)malloc(sizeof(k));
    k *p = head;
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
k *insertionAtEnd(k *head, int data)
{
    k *ptr = (k *)malloc(sizeof(k));
    k *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    ptr->data = data;
    return head;
}
k *insertionAfterNode(k *head, k *prevNode, int data)
{
    k *ptr = (k *)malloc(sizeof(k));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}
int main()
{

    k *head;
    k *second;
    k *third;
    // Allocation memory to all the nodes
    head = (k *)malloc(sizeof(k));
    second = (k *)malloc(sizeof(k));
    third = (k *)malloc(sizeof(k));
    // Linking each other
    head->data = 10;
    head->next = second;

    second->data = 12;
    second->next = third;

    third->data = 18;
    third->next = NULL;

    // linkedListTraversal(head);
    // head = insertionAtFirst(head, 1);
    // linkedListTraversal(head);
    // head = insertionAtIndex(head, 112, 2);
    // linkedListTraversal(head);
    // head = insertionAtEnd(head, 1121);
    // linkedListTraversal(head);
    head = insertionAfterNode(head, second, 1121);
    linkedListTraversal(head);

    return 0;
}