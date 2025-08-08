#include <stdio.h>
int stack[100], i ,j, choice = 0, n, top = -1;
void push();
void pop();
void peek();
void show();

int main() {
    printf("Enter the number of element in the stack: \n");
    scanf("%d", &n);

    printf("Enter the elements for the stack:\n");

    while(choice != 5){
        printf("Chose one from the below options...\n"); 
        printf("\n1.Push\n2.Pop\n3.Show\n4.Peek\n5.Exit"); 
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
                show();
                break;
            case 4:
                peek();
                break;
            case 5:
                printf("Exiting");
                break;
            default:
                printf("Enter a valid number.");
            
        }

    }

}

void push(){
    int val;
    if(top == n){
        printf("\nSTACK OVERFLOW\n");

    }

    else{
        printf("Enter value : ");
        scanf("%d", &val);
        top = top +1;
        stack[top] = val;
    }
}

void pop(){
    int val;
    if(top == -1){
        printf("\nSTACK EMPTY\n");
    }
    else{
        printf("Deleted element is %d", stack[top]);
        top = top -1;

    }
}

void peek(){
    if(top == -1){
        printf("\nSTACK EMPTY\n");
    }
    else{
        printf("Current top value : %d\n", stack[top]);

    }
}

void show(){
    if(top == -1){
        printf("\nSTACK EMPTY\n");
    }

    else{
        for(i = top; i >= 0; i--){
            printf("%d ", stack[i]);
        }
    }
}
