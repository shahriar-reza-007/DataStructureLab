#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    int temp;
    int x;
    string arr;
    cout<<"Enter Your Sentence: ";
    getline(cin,arr);

    cout<<endl;

    cout<<" Enter how much ASCII Value you want to change: ";
    cin>>x;

    for(int i=2; i<arr.size(); i+=2)
    {
        temp=arr[i];
        arr[i]=char(temp+x);

    }
    cout<<endl;
    cout<<" Converted Sentence is: ";

    for(int i=0; i<arr.size(); i++)
        cout<<arr[i];

    getch();
    return 0;
}

