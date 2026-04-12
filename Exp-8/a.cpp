//To check the string is palindrome or not wiuthout using loops:
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    string str,temp;
    cout<<"Enter string: ";cin>>str;
    temp=str;
    reverse(temp.begin(),temp.end());
    if(str==temp){
        cout<<"True";
    }else{
        cout<<"False";
    }
}