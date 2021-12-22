#include <stdio.h>

void checker(int n, int elem){
    if (n == -1){
        printf("The Element is not present in this Array");
    }
    else{
        printf("The Element %d located at postition %d", elem, n);
    }
}
int linearSearch(int arr[], int elem, int len){
    int pos;
    for (int i = 0; i < len; i++){
        if (arr[i] == elem){
            return i;
        }
    }
    return -1;
}
int binarySearch(int arr[], int elem, int len){
    int low = 0, mid, high = len;
    while (low <= high){
        mid = (low + high) / 2;
        if (arr[mid] == elem){
            return mid;
        }
        if (arr[mid] > elem){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}
int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int elem, pos, choice;
    int size = sizeof(arr) / sizeof(int);

    printf("Which type of search you want to perform\n1-Linear Search\n2-Binary Search \n");
    scanf("%d", &choice);

    printf("Which element you wanted to search in this Array\n");
    scanf("%d", &elem);

    switch (choice)
    {
    case 1:
        pos = linearSearch(arr, elem, size);
        checker(pos, elem);
        break;
    case 2:
        pos = binarySearch(arr, elem, size);
        checker(pos, elem);
        break;
    default:
        printf("Enter a valid Choice");
        break;
    }
    return 0;
}