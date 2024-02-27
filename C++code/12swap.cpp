#include<iostream>
using namespace std;

class c2;
class c1
{
    int a;
    public:
        void input(int o1)
        {
            a=o1;
        }
        friend void print(c1,c2);
        friend void swap(c1 &,c2 &);
};
class c2
{
    int a;
    public:
        void input (int o2)
        {
            a=o2;
        }
        friend void print(c1,c2);
        friend void swap(c1 &,c2 &);
};
void print(c1 m,c2 n)
{
    cout<<m.a<<" "<<n.a<<endl;
}

void swap(c1 &m,c2 &n)    //Call by reference 
{
    int temp;
    temp=m.a;
    m.a=n.a;
    n.a=temp;
}
int main()
{
    c1 m;
    c2 n;
    m.input(1);
    n.input(2);
    print(m,n);
    swap(m,n);
    print(m,n);
    return 0;
}