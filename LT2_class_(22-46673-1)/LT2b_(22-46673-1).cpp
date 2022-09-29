#include<iostream>
using namespace std;
int main()
{
    int Array1[5];
    int Array2[7];
    int Array3[13];
    int n=0;
    cout<<"Please take 5 input for Array1 : ";
    for(int i=0; i<5; i++)
        cin>>Array1[i];
    cout<<"Elements of Array2 : ";
    for(int i=0; i<5; i++)
        cout<<Array1[i]<<'\t';

    cout<<endl;
    cout<<"Please take 7 input for Array2 : ";
    for(int i=0; i<7; i++)
        cin>>Array2[i];
    cout<<"Elements of Array2 : ";
    for(int i=0; i<7; i++)
        cout<<Array2[i]<<'\t';

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<7; j++)
        {
            if(Array1[i]==Array2[j])
            {
                Array3[n]=Array2[j];
                n++;
            }
        }
    }

    cout<<endl;
    if(n==0)
    {
        cout<<"No Common element Found"<<endl;
    }
    else
    {
        {
            cout<<"Yes,Common elements exists "<<endl;
            cout<<"Common element of both array are: ";
        }
        for(int i=0 ; i<n; i++)
            cout<<Array3[i]<<'\t';
    }
}
