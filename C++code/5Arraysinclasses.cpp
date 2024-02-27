// Arrays in classes
#include <iostream>
using namespace std;

class Shop // Class is typedef
{
    int ItemID[100];
    int ItemPrice[100];
    int counter;
    public : 
        //int counter=0; //Doing this is a wrong programming practise 
        //if counter was private you could have done:  
        void initcounter(void) {counter=0;} 
        void getprice(void);
        void display(void);
};

void Shop :: getprice(void)
{
    cout<<"Enter the Item ID"<<endl;
    cin>>ItemID[counter];
    cout<<"Enter the price of item "<<(counter+1)<<endl;
    cin>>ItemPrice[counter];
    counter++;
}

void Shop :: display(void)
{
    for(int i=0;i<counter;i++)
    {
        cout<<"The price of item Id no."<<ItemID[i]<<" is "<<ItemPrice[i]<<endl;    
    }
}
int main()
{
    Shop s1; //s1 is an object
    s1.initcounter();
    for(int i=0;i<2;i++)
    {
        s1.getprice();
    }
    s1.display();

    return 0;
}