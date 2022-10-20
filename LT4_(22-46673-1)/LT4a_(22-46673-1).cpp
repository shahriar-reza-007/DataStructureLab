#include<iostream>
using namespace std;
void bubblesort(int Array[7])
{
    for(int i=0; i<7-1; i++)
    {


        {
            for(int j=0; j<7-i-1; j++)
                if (Array[j]>Array[j+1])
                {
                    swap (Array[j],Array[j+1]);
                }
        }
    }
}
int main()
{
    int Array[7]= {22,2,76,4,1,88,100};
    cout<<"Array is : ";
    for(int i=0; i<7; i++)
        cout<<Array[i]<<" ";
    for(int i=0; i<7; i++)
        bubblesort(Array);
    cout<<endl;
    cout<<"Sorted Array is : "<<'\n';
    for(int i=0; i<7; i++)
        cout<<Array[i]<<" ";

}
