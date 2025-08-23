#include<iostream>
#include<stack>
using namespace std;
int main(){
string s;
stack<char>stak;
getline(cin,s);

for(int i=0;i<s.length();i++){
    if(s[i]!=' '){
        stak.push(s[i]);
    }else{
        while(!stak.empty()){
            char ch=stak.top();
            cout<<ch;
            stak.pop();
        }
        cout<<" ";
    }


}
while(!stak.empty()){
    cout<<stak.top();
    stak.pop();
}
cout<<endl;


    return 0;
}