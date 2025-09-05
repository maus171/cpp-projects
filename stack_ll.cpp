#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    
        Node(int val)
        {
            data=val;
            next=NULL;
        }
        
};
class stack{
    Node* top;
    public:
        stack()
        {    top=NULL;
        }
        void push(int val)
        {   Node* newnode=new Node(val);
            if(top==NULL)
            {   
                
                top=newnode;
            }
            else
            {
                newnode->next=top;
                top=newnode;
            }
            }
        void pop()
        {   Node* popped;
            if(top==NULL)
            {
                cout<<"Stack Underflow";
            }
            else
            {
                Node* temp=top;
                cout<<"Popped element is "<<top->data<<endl;
                top=top->next;
                delete temp;
                    
                   
             }

        }

        void print_stack()
        {   
            Node* temp=top;
            cout<<"Stack is: "<<endl;
            while(temp!=NULL)
            {
                cout<<temp->data<<endl;
                temp=temp->next;

            }
        }
};

int main()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.print_stack();
    s.pop();
    s.print_stack();
}