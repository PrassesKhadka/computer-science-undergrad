//Create a function which takes 2 point objects and computes the distance between those points
#include<iostream>
#include<cmath>          //Math function
using namespace std;

class points
{
    int a,b;
    public:
        points(int,int);  //Initialising Parameterized constructor
        friend float distance(points,points);            //Friend function initialised 
};
points::points(int x,int y)   //Defining Parameterized constructor
{
    a=x;
    b=y;
}
float distance(points first,points second)   //Declaring friend function
{
    float distance=sqrt(pow(second.a-first.a,2)+pow(second.b-first.b,2));
    return distance;
}
int main()
{
    points first(1,0),second(70,0);  //Parameterized constructor in play
    float result=distance(first,second);
    cout<<"The distance between the points is "<<result<<endl;
    return 0;
}