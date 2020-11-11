#include<stdio.h>
#define MAX_SIZE 100
 
int stack[MAX_SIZE];
int top=-1;
 
int IsEmpty(){
    if(top<0)
        return true;
    else
        return false;
    }
int IsFull(){
    if(top>=MAX_SIZE-1)
        return true;
    else
        return false;
}
 
void push(int value){
    if(IsFull()==false)
        stack[++top]=value; 
}
 
int pop(){
    if(IsEmpty()==false)
        return stack[top--];
}
 
int main(){
    
    push(3);
    push(5);
    push(12);
    printf("%d ",pop());
    printf("%d ",pop());
    printf("%d ",pop());
 
    return 0;
}
