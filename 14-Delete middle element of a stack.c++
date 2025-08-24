#include<stdio.h>
#include<stack>
using namespace std;
int main(){
    stack<int>stak;
    //logic for taking input
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        stak.push(x);
    }

    int size=stak.size();
    stack<int>temp;
    int count=0;
    while(count<size/2){
        int top=stak.top();
        stak.pop();
        temp.push(top);
        count++;
    }

    stak.pop();

    while(!temp.empty()){
        int top=temp.top();
        stak.push(top);
        temp.pop();
    }

    while(!stak.empty()){
        int top=stak.top();
        stak.pop();
        cout<<top<<" ";
    }





    return 0;

}
