//Ambiguity Resolution in Inheritance 
#include<iostream>
using namespace std;


//For Ambiguity 1
class base1
{
    public:
        void greet()
        {
            cout<<"How are you?";
        }
};

class base2
{
    public:
        void greet()
        {
            cout<<"Kasto chau timi?";
        }
};

class derived:public base1,public base2
{
    int a;
    //#Resolving Ambiguity #1
    public:
        void greet()
        {
            base1::greet();
        }
};


//For Ambiguity 2
class B
{
    public:
        void say()
        {
            cout<<"Hello world"<<endl;
        }
};

class D:public B
{
    int a;
    //D's new say() method will override
    //base class's say() method
    public:
        void say()
        {
            cout<<"Hello my beautiful people"<<endl;
        }
};
int main()
{
    //Ambiguity 1

    //base1 base1obj;
    //base2 base2obj;
    //base1obj.greet();
    //base2obj.greet();
    //derived d;
    //d.greet();

    //Ambiguity 2
    B b;
    b.say();
    D d;
    d.say();

    return 0;
}