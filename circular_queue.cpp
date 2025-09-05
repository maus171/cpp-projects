#include<iostream>
using namespace std;

class queue
{   int front;
    int rear;
    int size;
    int curr;
    
    public:
        queue()
        {   front=-1;
            rear=-1;
            size=3;
            curr=0;
        }

        void enqueue(int arr[], int value)
        {
            if (curr==size)
            {   cout<<"Queue is full"<<endl;
                return;
            }
            else
            {
                rear=(rear+1)%size;
                arr[rear]=value;
                curr++;
            }
        }
        void dequeue(int  arr[])
        {   if(curr==0)
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
                curr--;
            }
        }

        void print_queue(int arr[])
        {   if (front==-1 && rear==-1)
            {   cout<<"Queue is empty"<<endl;
                return;
            }
            else
            {   cout<<"queue is: "<<endl;
                for (int i=0 ; i<size ; i++)
                {   cout<<arr[i]<<endl;
                }
                
            }
        }
};

int main()
{   int arr[3];
    queue q;
    q.enqueue(arr,10);
    q.enqueue(arr,20);
    q.enqueue(arr,30);
    q.dequeue(arr);
    q.dequeue(arr);
    q.dequeue(arr);
    q.dequeue(arr);
    q.dequeue(arr);
    q.dequeue(arr);
    q.print_queue(arr);
    return 0;
}  