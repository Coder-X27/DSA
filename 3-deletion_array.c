#include<stdio.h>

void display(int arr[],int n){
    printf("The array is -> ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int deleteElem(int arr[],int size,int index,int arrSize){
    if(index>=arrSize){
        return -1;
    }
    else{
        for(int i=index;i<=size-1;i++){
            arr[i]=arr[i+1];
        }
    }
}

int main(){
    
    int arr[100],index,size;
    printf("Enter the no of elements you want to enter in the array\n");
    scanf("%d",&size);
    
    for(int i=0;i<size;i++){
        printf("Enter element no %d\n",i+1);
        scanf("%d",&arr[i]);
    }

    display(arr,size);

    printf("Enter the Index you want to delete\n");
    scanf("%d",&index);
    deleteElem(arr,size,index,100);
    size-=1;
    display(arr,size);
    return 0;
}