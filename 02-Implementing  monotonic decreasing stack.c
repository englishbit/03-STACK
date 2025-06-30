#include<stdio.h>
#define CAPACITY 100
int stack[CAPACITY];
int top=-1;

void push(int x){
p>=CAPACITY-1){
        pr
    if(toinutf("stack is full\n");
        retrn;
    }

    while(top!=-1&&stack[top]>x){
        top--;
    }

    stack[++top]=x;
}




int main(){

    int n,x;
    scanf("%d",&n);


    //logic for special case

    if(n>CAPACITY||n<1){
        printf("wrong input\n");
        return 1;
    }

    



    //logic for taking the input 
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        push(x);

    }


    //lgoic for printing the stack
    for(int j=0;j<=top;j++){
        printf("%d\n",stack[j]);
    }



    return 0;
}
