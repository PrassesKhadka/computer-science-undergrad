//Class Templates with Default Parameters
#include<iostream>
using namespace std;

template<class T1=int,class T2=float>
class prasses
{
    T1 a;
    T2 b;
    public:
        prasses(T1 x,T2 y)
        {
            a=x;
            b=y;
        }
        void display()
        {
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
        }
};
int main()
{
    prasses<> obj1(4,6.4);  
    obj1.display();
    prasses<float,char> obj2(1.4,'c');
    obj2.display();
    return 0;
}