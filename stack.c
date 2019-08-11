#include <stdio.h>
#define max 5
 
struct stack
{
    int stk[max];
    int top;
};
typedef struct stack STACK;
STACK s;
 void push(int);
int  pop();
void display();
int main()
{   
   
    while(1)
    {
        fflush(stdin);
    printf(".............\n");
    printf("1 to push\n");
    printf("2 to pop\n");
    printf("3 to display\n");
    printf("4 to exit\n");
    int choice;
    int n;
    scanf("%d",&choice);
    switch(choice)
    {case 1:
        
        scanf("%d",&n);
        printf("enter the element\n");
        push(n);
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    case 4 :
        return 0;
    }
    
}}
void push(int n)
{
    if(s.top==max)
    printf("stack full");
    else{
    s.top=s.top +1;
    s.stk[s.top]=n;
    printf("%d element has been pushed\n",s.stk[s.top]);
    }
}
int pop()
{   if(s.top==-1)
    printf("stack is empty\n");
    else{
    s.top=s.top-1;
    return s.stk[s.top];
    }
}

void display()
{
    int j=1;
    if(s.top==-1)
    printf("stack is empty\n");
    else{
    printf("\n");
    while(j<=s.top){
    printf("%d ",s.stk[j]);
    j++;}
        printf("\n");
    }}
    
    

