//Parentheses cheaker:
#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
    stack<char> st;
    for(char c : s) {
        if(c=='(' || c=='{' || c=='[') st.push(c);
        else {
            if(st.empty()) return false;
            if((c==')' && st.top()!='(') ||
               (c=='}' && st.top()!='{') ||
               (c==']' && st.top()!='[')) return false;
            st.pop();
        }
    }
    return st.empty();
}

int main() {
    string s;
    cin >> s;
    cout << (check(s) ? "Valid" : "Invalid");
}