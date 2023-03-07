/* Inheritance */

#include <iostream>
#include<string.h>
using namespace std;

class Engineer
{
    protected: int age;
               string name;
    public: void get_e()
            {
                cout<<"Enter Name"<<endl;
                cin.ignore();
                getline(cin,name);
                cout<<"Enter Age"<<endl;
                cin>>age;
            }
            void put_e()
            {
                cout<<"Name: "<<name<<endl;
                cout<<"Age: "<<age<<endl;
            }
};

class Player
{
    protected: int score;
    public: void get_p()
    {
        cout<<"Enter Score"<<endl;
        cin>>score;
    }
            void put_p()
            {
                cout<<"Score: "<<score<<endl;
            }
};

class Database: public Engineer , public Player
{
    protected: int ID, salary;
    public: void get_d()
            {
                cout<<"Enter ID"<<endl;
                cin>>ID;
                cout<<"Enter Salary"<<endl;
                cin>>salary;
            }
            void put_d()
            {
                cout<<"ID: "<<ID<<endl;
                cout<<"Salary: "<<salary<<endl;
            }
};

int main()
{
    Database ob;
    char s;
    cout<<"Enter 'E' if Engineer and 'P' if player"<<endl;
    cin>>s;
    switch(s)
    {
        case 'E': ob.get_e();
                  ob.get_d();
                  cout<<"---------------"<<endl;
                  ob.put_e();
                  ob.put_d();
                  cout<<"---------------"<<endl;
                  break;
        case 'P': ob.get_p();
                  ob.get_d();
                  cout<<"---------------"<<endl;
                  ob.put_p();
                  ob.put_d();
                  cout<<"---------------"<<endl;
                  break;
        default: cout<<"Invalid Choice"<<endl;
    }
    return 0;
}
