#include<iostream>
#include<stack>
#define max 100000
using namespace std;
int array[max]={-1};
int main(){
    //logic for taking input
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>array[i];
}
stack<int>stak;
stak.push(array[0]);

for(int i=1;i<n;i++){
    if(array[i]>stak.top()){
        stak.push(array[i]);
    }
}

    //logic for output
cout<<stak.size();

    return 0;

}
