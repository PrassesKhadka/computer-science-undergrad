//Friend Classes and Friend member function
#include<iostream>
using namespace std;

//Forward declaration
class complex;    //Here class complex is initialised as in class calculator we are using class complex
class calculator
{
    public:
        int sumrealcomplex(complex,complex);  //Here compiler does not know a and b as 
                                               //class complex has not been defined yet
        int sumcompcomplex(complex,complex);
};

class complex 
{
    int a,b;
    //Individually declaring funtion as friend
    //#Friend member function
    //friend int calculator :: sumrealcomplex(complex o1,complex o2);     //defining calculator as friend class to let
                                                                        //it use the private data a and b
    //friend int calculator :: sumcompcomplex(complex o1,complex o2);     
    //Now if you have to make every function is calculator class as friend then you have to define everytime
    //you make a function thus it's easier to make a friend class #easier

    //Thus Aliter:Declare the entire class as friend
    friend class calculator;
    public:

        void setnumber(int n1,int n2)
        {
            a=n1;
            b=n2;
        }
};

//Here class complex has been defined and thus has a and b and now we can
//set sumrealcomplex function
int calculator :: sumrealcomplex(complex o1,complex o2)
{
    return (o1.a+o2.a);
}

int calculator :: sumcompcomplex(complex o1,complex o2)
{
    return (o1.b+o2.b);
}
int main()
{
    complex o1,o2;
    o1.setnumber(1,4);
    o2.setnumber(5,7);
    calculator calc;

    int result1=calc.sumrealcomplex(o1,o2);
    cout<<"The sum of real part of o1 and o2 is "<<result1<<endl;

    int result2=calc.sumcompcomplex(o1,o2);
    cout<<"The sum of complex part of o1 and o2 is "<<result2<<endl;
    return 0;
}