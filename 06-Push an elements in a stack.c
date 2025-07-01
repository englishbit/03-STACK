#include<stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
 int top=-1;
void push(int x){
    
   

    if(top<CAPACITY-1){
        top++;
        stack[top]=x;
          
    }else{printf("the stack is full");}
    
}

int main(){
push(10);
push(20);

    return 0;
}
