#include <iostream>
using namespace std;

int main()
{
    int Array1[5],i;
    cout<<"Please take 5 Array input : ";
    for(i=0; i<5; i++)
        cin>>Array1[i];
    int j;
    cout<<"Element without repeating are : ";
    for(i=0; i<5; i++)
    {
        for(j=0; j<i; j++)
        {
            if (Array1[i]==Array1[j])
            {
                break;
            }
        }
        if(i == j)
        {
            {
                cout<<Array1[i]<<'\t';
            }

        }


    }

}
