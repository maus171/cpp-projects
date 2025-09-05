#include<iostream>
using namespace std;

class queue
{   int front;
    int rear;
    int size;
    
    public:
        queue()
        {   front=-1;
            rear=-1;
            size=100;
        }

        void enqueue(int arr[], int value)
        {
            if (rear==size-1)
            {   cout<<"Queue is full"<<endl;
                return;
            }
            else if (front==-1 && rear==-1)
            {   front=rear=0;
                arr[rear]=value;
            }
            else
            {
                rear ++;
                arr[rear]=value;
            }
        }
        void dequeue(int  arr[])
        {   if(front==-1 && rear==-1)
            {  cout<<" queue is empty"<<endl;
                return;
            }
            else if (front==rear)
            {   cout<<"dequeued element is "<<arr[front]<<endl;
                front=rear=-1;
            }
            else
            {   cout<<"dequeued element is "<<arr[front]<<endl;
                front++;
            }
        }

        void print_queue(int arr[])
        {   if (front==-1 && rear==-1)
            {   cout<<"Queue is empty"<<endl;
                return;
            }
            else
            {   
                cout<<"Queue is: "<<endl;
                for (int i=front ; i<=rear ; i++)
                {   cout<<arr[i]<<endl;
                }
            }
        }
};

int main()
{   int arr[100];
    queue q;
    q.enqueue(arr,10);
    q.enqueue(arr,20);
    q.enqueue(arr,30);
    q.enqueue(arr,40);
    q.enqueue(arr,50);
    q.enqueue(arr,60);
    q.print_queue(arr);
    q.dequeue(arr);
    q.print_queue(arr);
}