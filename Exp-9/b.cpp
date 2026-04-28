#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class Stack
{
protected:
    Node *top = nullptr;

public:
    void push()
    {
        int value;
        Node *newnode = new Node;
        cout << "Enter value: ";
        cin >> value;
        newnode->data = value;
        newnode->next = top;
        top = newnode;
        cout << "The data " << value << " is pushed...!" << endl;
    }
    void pop()
    {
        if (top == nullptr)
        {
            cout << "Stack is Empty...!" << endl;
            return;
        }
        else
        {
            Node *temp = new Node;
            temp = top;
            top = top->next;
            cout << temp->data << " is poped...!" << endl;
            delete temp;
        }
    }
    void display()
    {
        if (top == nullptr)
        {
            cout << "Stack is Empty...!" << endl;
            return;
        }
        else
        {
            Node *temp = top;
            while (temp != nullptr)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

int main()
{
    Stack s;
    int choice;
    while (true)
    {
        cout << "1.> Push " << endl;
        cout << "2.> Pop " << endl;
        cout << "3.> Display " << endl;
        cout << "4.> Exit " << endl;
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            s.push();
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;
        case 4:
            cout << "Exiting...!";
            exit(0);
            break;
        default:
            cout << "Wrong input...!" << endl;
        }
    }
}
