//Static data members and static member functions
//Here count is the static data member in the class employee
#include<iostream>
using namespace std;

class Employee
{ 
    int id;
    static int count;

    public:
        void setdata(void)
        {
            cout<<"Enter the id"<<endl;
            cin>>id;
        }
        void getdata(void)
        {
            count++;
            cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
        }

        //Static member functions
        static void displaycount(void)
        {
            cout<<id;                 //Throws an error as static member functions can only access
                                        //static data members or static member function
                                        //Thus count was able to be used
            cout<<"The value of count is "<<count<<endl;
        }
};

//we have to define static data member outside of class
int Employee :: count; //Default value is 0

int main()
{
    Employee harry,ramesh,suresh;
    //harry.id=101; //id is a private data member thus cannot be accessed
    harry.setdata();
    ramesh.setdata();
    suresh.setdata();

    harry.getdata();
    Employee displaycount();
    ramesh.getdata();
    Employee :: displaycount();
    suresh.getdata();
    Employee :: displaycount();
    return 0;
}