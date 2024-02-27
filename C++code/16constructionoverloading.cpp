//Construction Overloading
#include<iostream>
using namespace std;

class complex
{
    int a,b;
    public:
       complex(int x,int y)    //Parameterized Constructor
       {
           a=x;
           b=y;
       }
       complex(int x)
       {
           a=x;
           b=0;
       }
       complex()
       {
           a=1;
           b=2;
       }
       void print()
       {
           cout<<a<<"+i"<<b<<endl;
       }
};
int main()
{
    complex c1(2,3);
    c1.print();
    complex c2(2);
    c2.print();
    complex c3;
    c3.print();
    return 0;
}