#include<stdio.h>
#define CAPACITY 5
int stack[CAPACITY];
int top=-1;

int pop(){
    if(top>=0){
        int val=stack[top];
        top--;
        return val;
    }else{return -1;}
}
int main(){ 
    pop();

    return 0;
}
