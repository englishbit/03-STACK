#include<stdio.h>
#define CAPACITY 100
int stack[CAPACITY];
int indx1=-1;
int indx2=CAPACITY;
int s1=CAPACITY/2;



    //logic for inserting an element in stack one
    void push_1(int x){
        if(indx1+1>=s1){
            printf("the stack one is full\n");
            
        }else{
            indx1++;
            stack[indx1]=x;
        }
    }



    // logic for inserting  an element in stack two

        void push_2(int y){
            if(indx2-1<=indx1){
                printf("stack two is full\n");

            }else{
                indx2--;
                stack[indx2]=y;
            }
        }

     //logic for push from the stack one 

     int pop_1(){
        if(indx1==-1){
                printf("the stack one is empty");
                return -1;
        }else{
            return stack[indx1--];
        }
     }

    //logic for push from the stack two

    int pop_2(){
        if(indx2==CAPACITY){
            printf("the stack two is empty");
            return -1;
        }else{
            
            return stack[indx2++];
        }
    }




int main(){


    push_1(5);
    push_2(10);
    printf("%d",pop_1()); 
    printf("%d",pop_2());









    return 0;
}
