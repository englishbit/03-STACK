#include<iostream>
#include<stack>
using namespace std;
int main(){
string s;
stack<char>stak;
cin>>s;

for(int i=0;i<s.length();i++){

    if(s[i]=='(' || s[i]=='{' || s[i]=='['){
        stak.push(s[i]);

    }else if(s[i]==')' || s[i]=='}' || s[i]==']'){

        if(stak.empty()){
            cout<<"false"<<endl;
            return 0;
        }


        if(stak.top()!='(' && s[i]==')' || stak.top()!='{' && s[i]=='}' || stak.top()!='['&& s[i]==']'){
            cout<<"false"<<endl;
            return 0;
        }




        stak.pop();

    }
}



if(stak.empty()){
    cout<<"true"<<endl;
}else{
    cout<<"false"<<endl;
}


    return 0;
}