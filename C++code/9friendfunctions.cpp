//Friend functions
#include<iostream>
using namespace std;

class complex 
{
    int a,b;
    public:

        void setnumber(int n1,int n2)
        {
            a=n1;
            b=n2;
        }
        
        void print()
        {
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }

        friend void sum(complex,complex);       //Friend function
};

void sum(complex o1,complex o2)   //since friend function is declared inside the class now the private data members 
                                  //can be accessed here 
{
    //cout<<a; //Invalid
    //a and b i.e private data members cannot be accesed directly but using o1.a and similarly only 
    complex c3;
    c3.setnumber(o1.a+o2.a,o1.b+o2.b);
    c3.print();
}

int main()
{
    complex c1,c2;
    c1.setnumber(1,4);
    c1.print();  

    c2.setnumber(5,8);
    c2.print(); 

    sum(c1,c2); 
    return 0;
}