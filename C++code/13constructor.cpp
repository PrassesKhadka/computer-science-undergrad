//Constructor
#include<iostream>
using namespace std;
class c1
{
    int a;
    public:
    void input(int o1)
    {
        a=o1;
    }
    void print()
    {
        cout<<a<<endl;
    }
    c1(void);  //Constructor declaration
};

c1 :: c1(void)   //This is a default constructor
{
    a=10;
    cout<<"Hello world"<<endl;  //This is also invoked for all objects
}

int main()
{
    c1 o1,o2,o3;
    //o1.input(1);
    o1.print();
    o2.print();
    o3.print();
    return 0;
}