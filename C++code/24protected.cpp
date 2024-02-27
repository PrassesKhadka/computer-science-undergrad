//Protected Access Modifier
#include<iostream>
using namespace std;

class base
{
    protected:   //Private but can be inherited
        int a;
    private:
        int b;
    
        
    
};

class derived:base
{
    
};
int main()
{
    base b;
    derived d;
    //cout<<b.a;   //Cannot be accessed as protected
    //cout<<d.a;


    return 0;
}