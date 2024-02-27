/*
Create 2 classes:
    1.Simplecalculator-Takes input of 2 numbers using
    a utility function and performs +,-,*,/.
    and displays the results using another
    function
    2.Scientificcalculator-Takes input of 2 numbers using a utility funciton and 
    performs any four scientific operation of your choice 
    and displays the results using another function
    
    Create another class Hybridcalculator and inherit it using these 2 classes:
    Q1.What type of inheritence are you using
    Q2.Which mode of inheritance are you using
    Q3.Create and object of hybridcalculator and display results of simple and 
    scientific calculator.
    Q4.How is code reusability implemented
*/
#include<iostream>
using namespace std;

class simplecalculator
{
    protected:
        int a,b;
    public:
        void getdata(int x,int y)
        {
            a=x;
            b=y;
        }
        void result1()
        {
            cout<<"Add "<<a+b<<endl;
            cout<<"Subtract "<<a-b<<endl;
            cout<<"Multiply "<<a*b<<endl;
            cout<<"Divide "<<a/b<<endl;
        }
};

class scientificcalculator:public simplecalculator
{
    public:
        void result2()
        {
            cout<<"Remainder "<<a%b<<endl;
        }
};


class hybridcalculator:public scientificcalculator
{
    
};
int main()
{
    hybridcalculator h1;
    h1.getdata(1,1);
    h1.result1();
    h1.result2();
    return 0;
}