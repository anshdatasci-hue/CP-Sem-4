//Anagram string:
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1,str2;
    cout<<"Enter string: ";cin>>str1;
    cout<<"Enter string: ";cin>>str2;
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1==str2){
        cout<<"Anagram true...!";
    }else{
        cout<<"Anagram false...!";
    }
}