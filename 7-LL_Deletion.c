#include <stdio.h>
#include <stdlib.h>
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

ks *deleteAtFirst(ks *head)
{
    ks *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

ks *deleteAtIndex(ks *head, int index)
{
    ks *p = head;
    ks *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
ks *deleteLast(ks *head)
{
    ks *p = head;
    ks *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
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
    printf("LInked list before Traversal:-> \n");
    linkedListTraversal(head);
    // It deletes the first node of the linked list.?
    // head = deleteAtFirst(head);
    // printf("Linked list after deletion is :->\n");
    // linkedListTraversal(head);

    // It deltes at a particular index
    printf("LInked list after Traversal:-> \n");
    // head = deleteAtIndex(head, 0);
    // linkedListTraversal(head);

    // It deletes teh last element of the linked list
    head = deleteLast(head);
    linkedListTraversal(head);

    return 0;
}