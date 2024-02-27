//Function Overloading
#include<iostream>
using namespace std;
int sum(float a,int b)    //even if wrong data type given error is not thrown
{
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
} 
int sum(int a,int b,int c)
{
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}



//Volume of cube,cuboid and cylinder
int volume(int a,int b,int c)    //In these 3 functions the no of arguments differs
{
    return (a*b*c);
}
int volume(int a)
{
    return (a*a*a);
}
int volume(int r,int h )
{
    return (3.14*r*r*h);
}

int main()
{
    cout<<"The sum is "<<sum(3,6)<<endl;
    cout<<"The sum is "<<sum(1,2,8)<<endl;


    //Volume using function overloading
    cout<<"The volume of cylinder is "<<volume(3,2)<<endl;
    cout<<"The volume of cube is "<<volume(2)<<endl;
    cout<<"The volume of cuboid is "<<volume(1,2,3)<<endl;
}