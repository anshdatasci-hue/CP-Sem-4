//Find target string in source string using find fn:
#include <bits/stdc++.h>
using namespace std;

int main(){
    string src,target;
    cout<<"Enter src & target: ";cin>>src>>target;
    int ans=src.find(target);
    if(ans!=string::npos){
        cout<<ans;
    }else{
        cout<<-1;
    }

}