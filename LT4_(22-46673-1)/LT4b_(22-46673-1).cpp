#include<iostream>
using namespace std;
int main()
{
    int Array[7]= {3,77,5,22,74,33,48};
    int n,flag =0;
    cout<<"Enter a Number that you wanted to linear search : ";
    cin>>n;
    for(int i=0; i<7; i++)
        if (Array[i]==n)
        {
            flag++;
            cout<<"Element "<<n<< " found in "<<i+1<<" position";
        }
    if(flag==0)


        cout<<"Number is Not found in the Array ";

}
