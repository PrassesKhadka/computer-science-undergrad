//Inheritence
#include<iostream>
using namespace std;

//Base class
class employee 
{
    public:
        int id;
        float salary;
        employee(int idinput)
        {
            id=idinput;
            salary=15000;
        }
        employee(){}  //WHY!!!!!
        //if you make derived class,automatically base class's default constructor is called
};

/*Derived Class syntax
class{{derived-class-name}}:{{visibility-mode}} {{base-class-name}}
{
    class members/methods,etc...
}
Notes:
1.Default visibility mode is private
2.Public visibility mode:public members of the base class 
becomes public members of the derived class
3.Private visibility mode:public members of the base class 
becomes private members of the derived class
#Private members are not inherited

*/

class programmer:employee  
{
    public:
    int languagecode;
    programmer (int idinput)
    {
        id=idinput;
        languagecode=9;  //you have inherited member of 
        //employee but you can add your own members as well
    }
    void getdata()
    {
        cout<<id<<endl;
    }
};

int main()
{
    employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer skillf(10);
    cout<<skillf.languagecode<<endl;
    skillf.getdata();
    //cout<<skillf.id<<endl; //notes 1 and 3
    return 0;
}