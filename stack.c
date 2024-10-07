#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[Max];
int top=-1;
void push()
 {
        int x;
        if(top == -1)
        {
                printf("stack is overflow");
        }
        else
        {
        printf("Enter the element into stack:");
        scanf("%d",&x);
        top = top + 1;
        stack [max] = x;
        for()
        }
 }
 void pop()
 {
        printf("in pop\n");
 }
 void travsel()
 {
        printf("in travsel\n");
 }
 

 int main()
 {
        int choice;
        printf("1.PUSH\n 2.POP\n 3.TRAVSEL\n 4.EXIT\n");
        printf("enter a choice:");
        do{
                scanf("%d",&choice);
                printf("your entered %d\n",choice);
                switch(choice)
                {
                        case 1:
                                push();
                                break;
                        case 2:
                                pop();
                                break;
                        case 3:
                                travsel();
                                break;
                        case 4:
                                return(0);
                        default:
                                printf("wrong choice entered");       
                        
                }
        }while(choice!=4);
        return(0);
        
 }
