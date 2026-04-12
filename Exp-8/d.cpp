//repeating element in a string:
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cout<<"Enter string: ";cin>>str;
    for(int i=0;i<str.length();i++){
        if(str.find(str[i])!=str.rfind(str[i])){
            cout<<str[i];
            return 0;
        }
    }
    cout<<-1;
    return 0;
}