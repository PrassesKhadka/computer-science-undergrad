//Copy Constructor
#include<iostream>
using namespace std;

class number
{
    int a;
    public:
    //You have to make a default constructor

        number()
        {
            a=0;
        }
        number(int num)
        {
            a=num;
        }
        //Copy constructor
        // When no copy constructor is found, the compiler makes a copy constructor by itself
        //#No Error even if copy constructor not present
        number(number &obj)
        {
            cout<<"Copy constructor is called"<<endl;
            a=obj.a;
        }

        void print()
        {
            cout<<"The number for this object is "<<a<<endl;
        }
};
int main()
{
    number x,y,z(45),z2;
    x.print();
    y.print();
    z.print();
    number z1(x);   //copy constructor invoked
    z1.print();

    z2=z;  //Copy constructor is not called
    z2.print();
    number z3=z; //Copy constructor is called
    z3.print();
    //z1 should resemble z or x or y
    return 0;
}