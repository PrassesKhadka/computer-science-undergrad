//Function Templates and function templates with parameters
#include<iostream>
using namespace std;

//Swapping 
template <class T>
void swapp(T &a, T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}


//Average values
template<class T1,class T2>

float funcaverage(T1 a,T2 b)
{
    float avg=(a+b)/2.0;
    return avg;
}
int main()
{
    float a;
    a=funcaverage(1.5,2);
    cout<<a<<endl;

    string x="prasses";
    string y="ram";
    swapp(x,y);
    cout<<x<<endl<<y<<endl;
    return 0;
}