#include<stdio.h>

void display(int arr[],int n){
    printf("The array is -> ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int insertElem(int arr[],int size,int elem,int index,int arrSize){
    if(size>=arrSize){
        printf("In if condition");
        return -1;
    }
    else{
        printf("In else condition");
        for(int i=size-1;i>=index;i--){
            arr[i+1]=arr[i];
        }
        arr[index]=elem;
    }
    
}

int main(){
    
    int arr[100];
    int elem,index,size;
    printf("Enter the no of elements you want to enter in the array\n");
    scanf("%d",&size);
    
    for(int i=0;i<size;i++){
        printf("Enter element no %d\n",i+1);
        scanf("%d",&arr[i]);
    }

    display(arr,size);

    printf("Enter the element you want to Insert\n");
    scanf("%d",&elem);
    printf("Enter the Index of the Element\n");
    scanf("%d",&index);
    insertElem(arr,size,elem,index,100);
    size+=1;
    display(arr,size);
    return 0;
}