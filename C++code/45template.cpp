//Templates with multiple parameters
#include<iostream>
using namespace std;

template<class T1,class T2>
class myclass
{
    public:
        T1 data1;
        T2 data2;
        myclass(int x,char y)
        {
            data1=x;
            data2=y;
        }
        void display()
        {
            cout<<this->data1<<endl<<this->data2;
        }
};
int main()
{
    myclass <int,char>obj(1,'c');
    obj.display();
    return 0;
}
