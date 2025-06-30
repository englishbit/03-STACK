#include<stdio.h>
#define CAPACITY 100
int stack[CAPACITY];
int top=-1;

void push(int x){

    if(top>=CAPACITY-1){
        printf("stack is full\n");
        return;
    }

    while(top!=-1&&stack[top]>x){
        top--;
    }

    stack[++top]=x;
}




int main(){

    int n,x;
    scanf("%d",&n);
    
    if(n>CAPACITY||n<1){
        printf("wrong input\n");
        return 1;
    }

    for(int i=0;i<n;i++){
        scanf("%d",&x);
        push(x);

    }
    
    for(int j=0;j<=top;j++){
        printf("%d\n",stack[j]);
    }



    return 0;
}
