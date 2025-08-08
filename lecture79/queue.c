#include <stdio.h>

int queue[100], front = -1, rear = -1, n, choice;
void push();
void pop();

int main(){
    printf("Enter the number of element in the queue: \n");
    scanf("%d", &n);

    printf("Enter the elements for the queue:\n");

    while(choice != 4){
        printf("Chose one from the below options...\n"); 
        printf("\n1.Push\n2.Pop\n3.Front\n4.Exit"); 
        printf("\n Enter your choice \n"); 
        scanf("%d",&choice);
        switch(choice){
            case 1:
                push();
                break;
            
            case 2:
                pop();
                break;

            case 3:
                //show();
                break;

            case 4:
                printf("Exiting");
                break;
            default:
                printf("Enter a valid number.");
        }
    }
}

void push(){
    int item;
    if(rear == n-1){
        printf("OVERFLOW");

    }

    else{
        if(front == -1 && rear == -1){
            front = 0;
            rear = 0;
            
        }
        else{
            printf("Enter element :");
            scanf("%d", &item);
            rear += 1;
        }
        queue[rear] = item;
    }
}

void pop(){
    int val;
    if(front == -1 || front > rear){
        printf("UNDERFLOW");
    }

    else{
        val = queue[front];
        if(front == rear){
            front = rear = -1;
        }
        else{
            front += 1;
        }
    }

}