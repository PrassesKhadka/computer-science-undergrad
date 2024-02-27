//Parameterized Constructor
#include<iostream>
using namespace std;

class complex 
{
    int a,b;
    public:
        complex(int,int);   //Constructor declaration
        void print()
        {
            cout<<"The complex number is "<<a<<"+i"<<b<<endl; 
        }
};
complex :: complex(int x,int y) //---->This is a parameterized constructor 
{
    a=x;
    b=y;
}
int main()
{
    //Implicit Call
    complex c1(2,3);
    c1.print();

    //Explicit Call
    complex c2=complex(5,7);
    c2.print();
    return 0;
}