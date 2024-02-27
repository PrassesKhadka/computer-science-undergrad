//Inline functions,Default argument
#include<iostream>
using namespace std;

//Inline keyword program
inline int product(int a,int b)
{
    return (a*b);
}

//Default argument function
int moneyReceived(int currentMoney,float factor=1.04)
{
    return currentMoney*factor;    
}
int main()
{
    int a,b;
    cout<<"Enter the value of a and b ";
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    
    //Default argument program
    cout<<endl<<"Default argument program"<<endl;
    int money=100000;
    cout<<"If you have "<<money<<"Rs in your bank account,you will receive"<<moneyReceived(money)<<"Rs after 1 year"<<endl;
    cout<<"But if you are a VIP you will receive"<<moneyReceived(money,1.1)<<"Rs after 1 year"<<endl;
    return 0;
}