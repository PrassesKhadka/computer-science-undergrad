//Program to use Virtual base class 
#include<iostream>
using namespace std;

//This program will not run because i have used constructors here and i have not
//yet learned how to pass constructors to derived classes (sed life!!!!!!!)

/*

INHERITENCE TREE
       student
academics       sport----->VIRTUAL BASE CLASS   
        print


*/

class student
{
        protected:
            int roll;
        public:
        student(){}                 
        //Assigning a default constructor as when 
        //return error if not done so
        //above class is inherited the default constructor is called automatically thus will 

        student(int x)     //Defining a constructor
        {
            roll=x;
        }
};
class academics:public virtual student    //Defining virtual base class
{
    protected:
        float maths;
        float physics;
        float english;
    public:
        academics(){}           
        //Assigning a default constructor as when above class is inherited the 
        //default constructor is called automatically thus will return error if not done so
        academics(float m,float p,float e)   //Defining a constructor again
        {
            maths=m;
            physics=p;
            english=e;
        }
};
class sport:public virtual student              //Defining a virtual base class
{
    protected:
        int score;
    public:
    //Assigning a default constructor as when above class is 
    //inherited the default constructor is called automatically thus will return error if not done so

        sport(){}
        sport(int s)     //Defining a constructor again and again
        {
            score=s;
        }
};

class print:public academics,public sport
{
    public:
        //Constructors in derived class
        print(int roll,int maths,int physics,int english,int score):student(roll),academics(maths,physics,english),sport(score)
        {

        }
        void display()
        {
            cout<<"Roll "<<roll<<endl;
            cout<<"Maths: "<<maths<<endl;
            cout<<"Physics: "<<physics<<endl;
            cout<<"English: "<<english<<endl;
            cout<<"Score: "<<score<<endl;
            cout<<"FINAL RESULT: "<<(maths+physics+english+score)/4<<endl;
        }
};

int main()
{
    print person(84,100,100,100,100);
    person.display();
    return 0;
}