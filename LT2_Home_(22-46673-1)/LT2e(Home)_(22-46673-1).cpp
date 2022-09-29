#include<iostream>
using namespace std;
int main()
{
    int A[10];
    int a;
    int n=0;
    cout<<"Array inputs are :" ;
    for(int i=0; i<10; i++)
    {
        cin>>A[i];
    }

    cout<<"Please take an input to search : " ;
    cin>>a;
    for(int i=0; i<10; i++)
    {
        if(a==A[i])
            n++;
    }

    cout<<"input "<<a<<" Occur "<<n<<" times ";
}

