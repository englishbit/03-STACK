#include<iostream>
#include<stack>
using namespace std;
int main(){
//logic for taking input
string s;
cin>>s;
stack<char>str;
for(int i=0;i<s.length();i++){
    str.push(s[i]);
}
    //logic for output
while(!str.empty()){
    char n_str=str.top();
    cout<<n_str;
    str.pop();
}

cout<<endl;

    return 0;

}


