//Virtual Functions--->Real time polymorphism
#include<iostream>
using namespace std;

class baseclass
{
    int varbase;
    public:
        virtual void display()//Virtual Functions
        {
            cout<<"1.Displaying baseclass variable varbase "<<varbase<<endl;
        }
};
class derivedclass:public baseclass
{
    public:
        int varderived;
        void display()
        {
            cout<<"2.Displaying derived class variable var derived "<<varderived<<endl;
        }
};                                                                                                                          
int main()
{
    baseclass *baseclasspointer;
    baseclass objbase;
    derivedclass objderived;
    baseclasspointer=&objderived;
    baseclasspointer->display();
    return 0;
}