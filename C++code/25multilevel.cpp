//Multilevel Inheritance 
#include<iostream>
using namespace std;

class student
{
    protected:
        int roll;
    public:
        void setroll(int);
        void getroll(void);


};

void student::setroll(int r)
{
    roll=r;
}
void student::getroll()
{
    cout<<"The roll number is "<<roll<<endl;
}

class exam:public student
{
    protected:
        float maths;
        float physics;
    public:
        void setmarks(float,float);
        void getmarks(void);
};

void exam::setmarks(float m1,float m2)
{
    maths=m1;
    physics=m2;
}
void exam::getmarks(void)
{
    cout<<"Maths "<<maths<<endl;
    cout<<"Physics "<<physics<<endl;
}

class result:public exam
{
    float percentage;
    public:
        void display()
        {
            getroll();
            getmarks();
            cout<<"Your percentage is "<<(maths+physics)/2<<endl;
        }
};

int main()
{
    result prasses;
    prasses.setroll(84);
    prasses.setmarks(100,100);
    prasses.display();
    return 0;
}