#include<iostream>
#include<stack>
using namespace std;
int main(){
string s;
stack<char>stak;
    //logic for taking input
getline(cin,s);

    //logic for reversing
for(int i=0;i<s.length();i++){
    if(s[i]!=' '){
        stak.push(s[i]);
    }else{
        while(!stak.empty()){
            char ch=stak.top();
            //logic for printing output
            cout<<ch;
            stak.pop();
        }
        cout<<" ";
    }


}
while(!stak.empty()){
    //logic for output
    cout<<stak.top();
    stak.pop();
}
cout<<endl;


    return 0;

}
