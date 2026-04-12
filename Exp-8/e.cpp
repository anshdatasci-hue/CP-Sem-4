//Reverse word of string not alphabets:
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> words;
    string sentance;
    cout<<"Enter sentence: ";getline(cin,sentance);
    stringstream ss(sentance);
    string word;
    while(ss>>word){
        words.push_back(word);
    }
    reverse(words.begin(),words.end());
    for(string record:words){
        cout<<record<<" ";
    }
}