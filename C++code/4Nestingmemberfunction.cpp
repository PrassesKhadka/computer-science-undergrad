// Nesting of member functions
//Use of scope resolution operator also in play(::)

#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;
    void chkbin(void);  //we have made chkbin function a private function which can only be 
                        //accessed by functions inside the class 
                        //not by any object or functions outside the class

public:
    //Functions Initialised inside a class
    void read(void);
    void ones_complement(void);
    void display(void);
};

void binary ::read(void) //Scope resolution operator is used because functions 
                         //initialised in class but defined outside a class
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::chkbin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary ::ones_complement(void)
{
    //#Nesting of member function
    //chkbin function can be accessed here as ones_complement function is a function inside a class

    chkbin(); 
    for (int i = 0; i < s.length(); i++)   //String's length function defined under #include<string>
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else
            s.at(i) = '0';
    }
}
void binary ::display(void)
{
    cout<<"Displaying:"<<endl;
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
}
int main()
{
    binary b;
    b.read();
    //chkbin function cannot be accessed here as it is a private function
    //throws error
    //b.chkbin(); 
    cout<<"Before ones complement"<<endl;
    b.display();
    b.ones_complement();
    cout<<endl<<"After ones complement"<<endl;
    b.display();
    return 0;
}