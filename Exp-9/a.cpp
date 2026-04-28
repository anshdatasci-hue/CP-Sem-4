// //STL stack push() & pop():
#include <bits/stdc++.h>
using namespace std;

stack<int> s;

void push(){
    int value;
    cout<<"Enter value: ";cin>>value;
    s.push(value);
    cout<<endl;
}

void pop(){
    if(s.empty()){
        cout<<"No value...!";
        return;
    }else{
        cout<<"Poped "<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;
}

void display(){
    cout<<"stack Elements: "<<endl;
    stack<int> temp = s;
    if(temp.empty()){
        cout<<"No value...!";
        return;
    }else{
        while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
    }
}

int main(){
    int choice;
    while(true){
        cout<<"1.> Push() "<<endl;
        cout<<"2.> Pop() "<<endl;
        cout<<"3.> Display "<<endl;
        cout<<"4.> Exit "<<endl;
        cout<<"Enter Choice: ";cin>>choice;
        switch(choice){
            case 1:push();break;
            case 2:pop();break;
            case 3:display();break;
            case 4:cout<<"Exiting...!";exit(0);break;
            default:cout<<"Wrong input...!"<<endl;
        }
    }
}