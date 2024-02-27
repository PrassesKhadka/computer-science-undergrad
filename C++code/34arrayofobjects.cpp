//Array of Objects Using Pointers in C++
#include<iostream>
using namespace std;

class shopitem 
{
    int id; 
    float price;
    public:
        void setdata(int a,float b)
        {
            id=a;
            price=b;
        }
        void getdata()
        {
            cout<<"Code of this item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};

int main()
{
    int size=3;
    int p;
    float q;
    shopitem *ptr=new shopitem[size];
    shopitem *ptrtemp=ptr;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter Id and price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++; //when coming to end ptr will be 
        //incremented and point to some other 
        //memory address thus ptrtemp

    }

    for(int i=0;i<size;i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    
    
    return 0;
}