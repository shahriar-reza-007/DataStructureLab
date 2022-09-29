#include<iostream>
using namespace std;
int main()
{
    int Array[13];
    cout<<"Please enter the Array value : "<<endl;
    for(int i=0; i<13; i++)
    {
        cin>>Array[i];
    }
    cout<<"Values are : ";
    for(int i=0;i<13;i++)    //Array Output
    {
        cout<<Array[i]<<'\t';
    }

    cout<<endl;

    cout<<"Reverse Values are : "<<'\t';
    for(int i=12;i>=0;i--)   //Reverse Output
    {
        cout<<Array[i]<<'\t';
    }

}
