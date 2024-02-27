//Pointers to derived classes
//Polymorphism:many forms
//-Function overloading,operator overloading,virtural Functions
#include<iostream>
using namespace std;

class baseclass
{
    public:
        int varbase;
        void display()
        {
            cout<<"Displaying baseclass variable varbase "<<varbase<<endl;
        }
};
class derivedclass:public baseclass
{
    public:
        int varderived;
        void display()
        {
            cout<<"Displaying base class variable var base "<<varbase<<endl;
            cout<<"Displaying base class variable var derived "<<varderived<<endl;
        }
};
int main()
{
    baseclass *baseclasspointer;  //Points to baseclass object here objbase
    baseclass objbase;  
    derivedclass objderived;
    baseclasspointer=&objderived;  //Pointing base class pointer to derived class object
    //baseclasspointer->varderived=34;  //Nah!!!!!!
    baseclasspointer->varbase=34;  
    baseclasspointer->display();  //Base class's display will only run 
    //#Late binding 
    //#Run time polymorphism
    return 0;
}