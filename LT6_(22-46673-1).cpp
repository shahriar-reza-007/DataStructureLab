#include <iostream>
using namespace std;
class Queue
{
private:
    int Array[6];
    int front,rear;
public:
    Queue()
    {
        front = - 1;
        rear = - 1;
        for(int i=0; i<5; i++)
        {
            Array[i]=0;
        }
    }
    bool isEmpty()
    {
        if((front==-1&& rear ==-1) || (front>rear))
            return true;
        else
            return false;
    }

    bool isFull()
    {
        if(rear==5)
            return true;
        else
            return false;
    }
    void Enqueue(int x)
    {
        if(isFull())
        {
            cout<<"Queue is Overflow"<<endl;
        }
        else if(isEmpty())
        {
            rear =0;
            front=0;
            Array[rear]=x;
            cout<<"Enqueue Done \n";
        }
        else
        {
            rear++;
            Array[rear]=x;
        }
    }
    void Dequeue()
    {
        if(isEmpty())
        {
            cout<<"Underflow \n";
        }
        else if(rear==front)
        {
            rear=-1;
            front=-1;
            cout<<"Dequeue Done \n";
        }
        else
        {
            front++;
            cout<<"Dequeue done \n";
        }
    }
    void Display()
    {
        if(isEmpty())
            cout<<"Empty"<<endl;

        else
            cout<<"Element of Array : ";
        {
            for(int i=front; i<=rear; i++)
                cout<<Array[i]<<" ";
        }
        cout<<endl;
    }
    int ShowFront()
    {
        if(isEmpty())
            cout<<"Queue is empty "<<endl;
        else
            cout<<"Front Element is : "<< Array[front]<<endl;
    }
};

int main()
{
    Queue q;
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Enqueue(4);
    q.Enqueue(5);
    q.Enqueue(6);
    q.Display();
    q.ShowFront();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Display();
    q.ShowFront();
return 0;
}


