#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int n)
{
    printf("The array is -> ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertElem(int arr[], int size, int elem, int index, int arrSize)
{
    if (size >= arrSize)
    {
        printf("In if condition");
        return -1;
    }
    else
    {
        printf("In else condition");
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = elem;
    }
}
int deleteElem(int arr[], int size, int index, int arrSize)
{
    if (size >= arrSize)
    {
        printf("In if condition");
        return -1;
    }
    else
    {
        printf("In else condition");
        for (int i = index; i <= size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
}
int main()
{

    int arr[100];
    int elem, index, size, choice;
    printf("Enter the no of elements you want to enter in the array\n");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter element no %d\n", i + 1);
        scanf("%d", &arr[i]);
    }

c:
    printf("Enter Your choice:-\n1.)Insertion\n2.)Deletion\n3.)Display\n4.)Exit\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter the element you want to Insert\n");
        scanf("%d", &elem);
        printf("Enter the Index of the Element\n");
        scanf("%d", &index);
        insertElem(arr, size, elem, index, 100);
        size += 1;
        goto c;

    case 2:
        printf("Enter the Index you want to delete\n");
        scanf("%d", &index);
        deleteElem(arr, size, index, 100);
        size -= 1;
        goto c;

    case 3:
        display(arr, size);
        goto c;

    case 4:
        exit(0);
        
    default:
        printf("Enter a Valid Choice .");
        goto c;
        break;
    }

    return 0;
}