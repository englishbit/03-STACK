#include<stdio.h>
#define CAPACITY 4
int stack[CAPACITY];
int top=-1;

int peek(){
    if(top>=0){
        return stack[top];
    }else{
        return -1;
    }
}

int main(){
         
peek();



    return 0;
}
