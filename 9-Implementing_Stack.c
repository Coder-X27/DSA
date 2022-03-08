#include<stdio.h>
#include<stdlib.h>
struct Stack{
    int top;
    int size;
    int *arr; 
};

int isEmpty(struct Stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct Stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    struct Stack *k;
    k->size=80;
    k->top=-1;
    k->arr=(int *)malloc(k->size*sizeof(int));


    // PUSHING AN ELEMENT MANUALLY
    // k->arr[0]=7;
    // k->top++;

    if(isEmpty(k)){
        printf("Stack is Empty");
    }
    else{
        printf("Stack is not Empty");
    }

    return 0;
}