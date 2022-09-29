#include<iostream>
using namespace std;
void Function(int x,int y)
{
    int Array[]={12,25,28,33,45,48,55,56,79,89,90,93,98};//Array Declaration
    cout<<"Odd Number's between range are : ";

    for(int i=0;i<13;i++)
    {
        for(int m=x;m<=y;m++)
        {
            if(Array[i]==m&&m%2!=0)      //Condition
            cout<<m<<" ";
        }
    }

}
int main()
{
    int x,y;
    cout<<"Enter 2 Expected range : "<<endl;
    cin>>x>>y;
    Function(x,y);
}
