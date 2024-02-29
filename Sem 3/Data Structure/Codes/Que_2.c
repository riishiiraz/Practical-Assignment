/*
    Que : 2| W.A.P. to Implement Stack functionalities Using Array.
*/

#include <stdio.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int size = MAX_SIZE, top = -1;

int isFull(){
    return top == size-1;
}
int isEmpty(){
    return top<0;
}

void push(int item){
    if(isFull()){
        printf("Overflow !\n");
        return;
    }

    stack[++top] = item;
}

int pop(){
    if(isEmpty()){
        printf("Underflow !\n");
        return -999;
    }

    return stack[top--];
}

int peek(){
    if(isEmpty()){
        printf("Underflow !\n");
        return -999;
    }

    return stack[top];
}

void display(){
    printf("\nShowing Stack [ ");
    for(int i=0 ; i<=top ; i++){
        printf("%d, ",stack[i]);
    }
    printf("]\n");
}

void main(){
    printf("Enter the size for Stack : ");
    scanf("%d",&size);

    int choice, temp;

    printf("\nEnter : \n");
    printf("1. for Push\n");
    printf("2. for Pop\n");
    printf("3. for Peek\n");
    printf("4. for Display\n");
    printf("5. for Exit\n");

    while(1){ 

        printf("Choice [1-5] : ");
        scanf("%d",&choice);

        if(choice == 1){
            printf("Enter item to Push : ");
            scanf("%d",&temp);

            push(temp);
        }
        else if (choice == 2)
            printf("Popped Item is : %d\n",pop());
        
        else if (choice == 3)
            printf("Peek item is : %d\n",peek());

        else if (choice == 4)
            display();

        else if (choice == 5)
            break;

        else
            printf("\nInvalid Choice\n");
    }
    printf("\nExit\n");

}