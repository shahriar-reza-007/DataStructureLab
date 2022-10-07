#include<iostream>
using namespace std;

class employee
{
    public: int id;
    int salary;
    int year;

};

int main()
{
    int x = 10;
    class employee record[10];
    for(int i = 0; i<10; i++)
    {
        cout<<"Give "<<i+1<<" employee Information : \n";
        cout<<"Id : ";
        cin>>record[i].id;
        cout<<"salary : ";
        cin>>record[i].salary;
        cout<<"Joining Year : ";
        cin>>record[i].year;
    }
    for(int i = 0; i<10; i++)
    {
        if(record[i].year < 2009 && record[i].salary > 20000)
        {
            cout <<"Condition matched employee no : "<<record[i].id<<endl;

        }

    }
}

