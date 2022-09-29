#include<iostream>
using namespace std;
int main()
{
    int Array1[5];
    cout<<"Please take 5 iput for Array1 : ";
    for(int i=0; i<5; i++)
        cin>>Array1[i];
    cout<<"Elements of 1st array are : ";
    for(int i=0; i<5; i++)
        cout<<Array1[i]<<'\t';

    cout<<endl;

    int Array2[7];
    cout<<"Take 7 input for Array2 : " ;
    for(int i=0; i<7; i++)
        cin>>Array2[i];
    cout<<"Elements of 2nd Array : ";
    for(int i=0; i<7; i++)
        cout<<Array2[i]<<'\t';

    int Array3[12];
    int j=0;
    for (int i=0; i<12; i++)
    {

        if(i<5)
        {
            Array3[i]=Array1[i];
        }
        else
        {
            Array3[i]=Array2[j];
            j++;
        }
    }

    cout<<endl;
    cout<<endl;
    cout<<"Merging Elements are : ";
    for(int i=0; i<12; i++)
        cout<<Array3[i]<<'\t';
    cout<<endl;
    cout<<"Merging Elements in Reverse : " ;
    for(int i=11; i>=0; i--)
        cout<<Array3[i]<<'\t';

}
