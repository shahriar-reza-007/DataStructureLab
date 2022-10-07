#include<iostream>
using namespace std;

int main()
{
    int row,column;
    cout<<"Array row : ";
    cin>>row;
    cout<<endl;
    cout<<"Array column : ";
    cin>>column;
    int arr[row][column];
    cout<<"Input your Array : ";
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Array : "<<endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }


    cout<<"Transpose Array is : "<<endl;
    for(int j = 0; j < column; j++)
    {
        for(int i = 0; i < row; i++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}


