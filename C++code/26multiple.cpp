#include<iostream>
using namespace std;

class base1
{
    protected:
        int base1int;
    public:
        void setbase1int(int a)
        {
            base1int=a;
        }
};
class base2
{
    protected:
        int base2int;
    public:
        void setbase2int(int a)
        {
            base2int=a;
        }
};

class derived:public base1,public base2
{
    public:
        void show()
        {
            cout<<"The value of base1 "<<base1int<<endl;
            cout<<"The value of base2 "<<base2int<<endl;
            cout<<"The sum of these values is "<<base1int + base2int<<endl;
        }
};

/*
The inherited derived class will look like this:
data members:
base1int--->protected
base2int--->protected

member functions:
setbase1int()--->public
setbase2int()---->public
show()-->public
*/

int main()
{
    derived prasses;
    prasses.setbase1int(10);
    prasses.setbase2int(10);
    prasses.show();
    return 0;
}