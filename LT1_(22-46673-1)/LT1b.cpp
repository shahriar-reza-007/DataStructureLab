#include<iostream>
using namespace std;
int main()
{
    int Array[13];
    cout<<"Input are : "<<endl;
    for(int i=0;i<13;i++)
    {
        cin>>Array[i];
    }

    cout<<"Even Number's are : "<<'\t';
    for(int i=0;i<13;i++)//Even Number
    {
        if(Array[i]%2==0)
            cout<<Array[i]<<'\t';
    }

    cout<<endl;

    cout<<"Odd Number's are : "<<'\t';
    for(int i=0;i<13;i++)//Odd Number
    {
        if(Array[i]%2!=0)
            cout<<Array[i]<<'\t';
    }


}
