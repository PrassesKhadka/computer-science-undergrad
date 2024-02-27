//Initialization list in constructor
#include<iostream>
using namespace std;


class initialisation
{
    int a,b;
    public:
    //Construction declaration:Initialising values
        //initialisation(int i,int j):a(i),b(j)
        //initialisation(int i,int j):a(i),b(i+j)   //like a function you can initialise
        //initialisation(int i,int j):a(i),b(a+j)   
        //initialisation(int i,int j):b(j),a(i+b)     //garbage value WHY!!!!!
        //Because a will be initialised first during private initialisation
        initialisation(int i,int j):a(i) 
        {
            b=j;
            cout<<"Construction Executed"<<endl;
            cout<<"The value of a and b is:"<<a<<" "<<b<<endl;
        }
};


int main()
{
    initialisation i(4,10);  
    return 0;
}