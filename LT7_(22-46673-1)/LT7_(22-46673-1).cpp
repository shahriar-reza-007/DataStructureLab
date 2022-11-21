#include <iostream>
#define SIZE 5

using namespace std;

class Queue
{
private:
    int Array[SIZE], front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }
    bool isFull()
    {
        if (front == 0 && rear == SIZE - 1)
        {
            return true;
        }
        if (front == rear + 1)
        {
            return true;
        }
        return false;
    }
    bool isEmpty()
    {
        if (front == -1)
            return true;
        else
            return false;
    }
    void enQueue(int x)
    {
        if (isFull())
        {
            cout << "Queue is full"<<endl;
        }
        else
        {
            if (front == -1) front = 0;
            rear = (rear + 1) % SIZE;
            Array[rear] = x;
            cout << endl;
                 cout<< "Enqueue done " <<endl;
        }
    }
    int deQueue()
    {
        int x;
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return (-1);
        }
        else
        {
            x= Array[front];
            if (front == rear)
            {
                front = -1;
                rear = -1;
            }

            else
            {
                front = (front + 1) % SIZE;
            }
            return (x);
        }
    }

    void display()
    {

        int i;
        if (isEmpty())
        {
            cout << endl
                 << "Queue is Empty" << endl;
        }
        else
        {
            for (i = front; i != rear; i = (i + 1) % SIZE)
                cout << Array[i]<<" ";
            cout << endl;
                 cout<< "Rear is = " << rear<<endl;
        }
    }
};

int main()
{
    Queue q;

    q.deQueue();

    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    q.enQueue(6);

    q.display();

    int elem = q.deQueue();

    if (elem != -1)
        cout << endl
             << "Deleted Element is " << elem;

    q.display();

    q.enQueue(7);

    q.display();

    q.enQueue(8);

    return 0;
}

