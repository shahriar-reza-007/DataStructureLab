#include<iostream>
using namespace std;
int main()
{
    int A[10]={2,4,5,55,4,2,55,2,5,9};
    int a;
    cout<<"Please take an input to search : " ;
    cin>>a;
    int n=0;
    for(int i=0;i<10;i++)
    {
        if(a==A[i])
            n++;
    }
    cout<<"input "<<a<<" Occur "<<n<<" times ";
}
