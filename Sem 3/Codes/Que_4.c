/*
    Que : 4| W.A.P. to Implement Stack functionalities Using Linked-List.
*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node *top = NULL;

void push(int item){

    struct Node* newNode = malloc(sizeof(struct Node));

    if(newNode==NULL){
        printf("Overflow !\n");
        return;
    }
    
    if(top == NULL){
        top = newNode;
        top->data = item;
        top->next = NULL;
    }
    else{
        newNode->data = item;
        newNode->next = top;
        top = newNode;
    }
}

int pop(){
    if(top == NULL){
        printf("Underflow !\n");
        return -999;
    }

    int temp = top->data;
    top = top->next;
    return temp;
}

int peek(){
    if(top == NULL){
        printf("Underflow !\n");
        return -999;
    }
    
    return top->data;
}

void display(){
    printf("\nShowing Stack [ ");
    struct Node* temp = top;

    while(temp){
        printf("%d, ",temp->data);
        temp = temp->next;
    }
    printf("]\n");
}

void main(){
    int choice, temp;

    while(1){
        printf("\nEnter : \n");
        printf("1. for Push\n");
        printf("2. for Pop\n");
        printf("3. for Peek\n");
        printf("4. for Display\n");
        printf("5. for Exit\n");

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