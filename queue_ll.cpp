#include<iostream>
using namespace std;
class node
{
    public:
        int data;
        node* next;

        node(int value)
        {
            data=value;
            next=NULL;
        }
};
class queue
{   node* front;
    node* rear;
    int size;
    
    public:
        queue()
        {   front=NULL;
            rear=NULL;
        }

        void enqueue(int value)
        {   node* newnode=new node(value);
            if (front==NULL && rear==NULL)
            {   front=rear=newnode;

            }
            else
            {
                rear->next=newnode;
                rear=newnode;
            }
        }
        void dequeue()
        {   if(front==NULL && rear==NULL)
            {  cout<<" queue is empty"<<endl;
                return;
            }
            else if (front==rear)
            {   cout<<"dequeued element is "<<front->data<<endl;
                front=rear=NULL;
            }
            else
            {   node*temp=front;
                cout<<"dequeued element is "<<front->data<<endl;
                front=front->next;
                delete temp;
            }
        }

        void print_queue()
        {   if (front==NULL && rear==NULL)
            {   cout<<"Queue is empty"<<endl;
                return;
            }
            else
            {   node*temp=front;
                cout<<"Queue is: "<<endl;

                while(temp!=NULL)
                {   cout<<temp->data<<endl;
                    temp=temp->next;
                }
                
            }
        }
};

int main()
{   int arr[100];
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.print_queue();
    q.dequeue();
    q.print_queue();
}