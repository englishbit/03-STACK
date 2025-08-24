#include<iostream>
#include<stack>
using namespace std;
int main(){
    //logic for taking input
int n;
cin>>n;
stack<int>stak1;
stack<int>stak2;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    stak1.push(x);
}

while(!stak1.empty()){

    int top=stak1.top();
    stak1.pop();
    
        while(!stak2.empty() && stak2.top()>top){
            stak1.push(stak2.top());
            stak2.pop();
        }

        stak2.push(top);
    }


    while(!stak2.empty()){
        cout<<stak2.top()<<" ";
        stak2.pop();
    }
    cout<<endl;
    return 0;

}
