//Dynamic Initialization of Objects Using Constructors
#include<iostream>
using namespace std;
class bankdeposit
{
    int principal;
    int years;
    float interestrate;
    float returnvalue;

    public:
        //Constructors Initialisation
        bankdeposit(){}    //If you donot initialise this error!!!
        bankdeposit(int p,int y,float r);
        bankdeposit(int p,int y,int r);
        void print();
};

bankdeposit::bankdeposit(int p,int y,float r)
{
    principal=p;
    years=y;
    interestrate=float(r)/100;
    returnvalue=principal;
    for(int i=0;i<y;i++)
    {
        returnvalue=returnvalue*(1+interestrate);
    }
}
bankdeposit::bankdeposit(int p,int y,int r)
{
    principal=p;
    years=y;
    interestrate=float(r)/100;
    returnvalue=principal;
    for(int i=0;i<y;i++)
    {
        returnvalue=returnvalue*(1+interestrate);
    }
}
void bankdeposit::print()
{
    cout<<endl<<"Principal amount was "<<principal<<endl
    <<"Return value after "<<years<<" is "<<returnvalue<<endl;
}
int main()
{
    bankdeposit bd1,bd2,bd3;    
    int p,y;
    float r;
    int R;  //R in int defined

    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    //bankdeposit// bd1=bankdeposit(p,y,r);
    bd1.print();

    cin>>p>>y>>R;
    //bankdeposit// bd2=bankdeposit(p,y,R);       //Here the c++ compiler is smart enough 
                                  //to know that we have used this R for int wala values constructor
    bd2.print();
    return 0;
}