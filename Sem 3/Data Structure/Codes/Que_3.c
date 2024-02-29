/*
    Que : 3| W.A.P. to Implement Queue functionalities Using Array.
*/

#include <stdio.h>

#define MAX_SIZE 100

int rear = -1, front = -1;
int queue[MAX_SIZE];
int size = MAX_SIZE;

int isFull(){
    return rear == size-1;
}
int isEmpty(){
    return rear == front;
}

void enqueue(int item){
    if(isFull()){
        printf("Overflow !\n");
        return;
    }   

    queue[++rear] = item;
}

int dequeue(){
    if(isEmpty()){
        printf("Underflow !\n");
        return -999;
    }

    return queue[++front];
}

int peek(){
    if(isEmpty()){
        printf("Underflow !\n");
        return -999;
    }

    return queue[front+1];
}

void display(){
    printf("\nShowing Queue [ ");
    for(int i=front+1 ; i<=rear ; i++){
        printf("%d, ",queue[i]);
    }
    printf("]\n");
}

void main(){
    printf("Enter the size for Queue : ");
    scanf("%d",&size);

    int choice, temp;

    printf("\nEnter : \n");
    printf("1. for Enqueue\n");
    printf("2. for Dequeue\n");
    printf("3. for Peek\n");
    printf("4. for Display\n");
    printf("5. for Exit\n");
    
    while(1){

        printf("Choice [1-5] : ");
        scanf("%d",&choice);

        if(choice == 1){
            printf("Enter item to Enqueue : ");
            scanf("%d",&temp);

            enqueue(temp);
        }
        else if (choice == 2)
            printf("Dequeued Item is : %d\n",dequeue());
        
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