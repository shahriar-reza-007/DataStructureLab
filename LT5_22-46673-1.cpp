#include<iostream>
using namespace std;
#define n 100

class stack
{
    int* Array;
    int top;
public:
    stack()
    {
        top=-1;
        Array=new int [n];
    }


    void push(int x)
    {
        if(top==n)
        {
            cout<<"The stack is overflow" <<endl;
            return;
        }
        top++;
        Array[top]=x;
    }


    void pop()
    {
        if(top==-1)
        {
            cout<<"The stack is empty. So, no element to pop "<<endl;
        }
        top--;
    }


    int Top()
    {
        if(top==-1)
        {
            cout<<"the stack has no element "<<endl;
            return 0;
        }
        return Array[top];
    }


    bool empty()
    {
        return top==-1;
    }


    bool full()
    {
        return top==Array[100];
    }


    void display()
    {
        if( empty())
        {
            cout<<"The stack is empty "<<endl;
        }
        else
        {
            cout<<"The Stack is : "<<endl;
            for (int i=top; i>=0; i--)
                cout<<Array[i]<<endl;
        }
    }
};

int main()
{
    stack st;
    st.push(5);
    st.push(3);
    st.push(8);
    st.push(99);
    st.display();
    cout<<"Top element is : "<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<"After pop, top is :"<<st.Top()<<endl;
    cout<<st.empty();
    cout<<endl;
    st.pop();
    st.pop();
    cout<<st.full();

}
