//
// Created by user on 15.10.2023.
//
#include <stdio.h>
#include <malloc.h>
#include <conio.h>
#include <math.h>

typedef struct stack{
    double value;
    struct stack *next;
}stack;

void push( stack **head, int value )
{
    stack* node = malloc( sizeof(stack) );

    if( node == NULL ) {
        fputs( "Error: Out of memory\n", stderr );
        exit( 1 );
    } else {
        node->value = value;
        node->next = *head;
        *head = node;
    }
}

int pop( stack **head )
{
    if( *head == NULL ) {
        fputs( "Error: bottom of stack!\n", stderr );
        exit( 1 );
    } else {
        stack* top = *head;
        int value = top->value;
        *head = top->next;
        free( top );
        return value;
    }
}
int main(){
   stack *head;
   char input[5];
   int num;
   double op,num1,num2;
    while (input[0]!='=') {
        scanf("%s", input);
        if(input[0]!='=') {
            switch (*input) {
                case '*':op= pop(&head)* pop(&head);
                    push(&head,op);break;
                case '/':{
                    num2=pop(&head);
                    num1=pop(&head);
                    op=num1/num2;
                push(&head,op);}break;
                case '-':{num2=pop(&head);
                    num1=pop(&head);
                    op=num1-num2;
                    push(&head,op);}break;
                case '+':op= pop(&head)+ pop(&head);
                    push(&head,op);break;
                case '^':num2=pop(&head);
                    num1=pop(&head);
                    op= pow(num1,num2);
                    push(&head,op);break;
                    
                default: {
                    sscanf(input, "%d", &num);
                    push(&head, num);
                }
            }
        }
    }
    printf("Result: %.2f",op);
    getch();
}
