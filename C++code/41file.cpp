#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //Connecting our file with obj1 stream
    ofstream obj1("sample41a.txt");

    //Creating a name string and filling it with the string entered by the user
    string name;
    cout<<"Enter your name"<<endl;
    cin>>name;

    //Writing a string to the file
    obj1<<name+" is my name";
    obj1.close();

    ifstream obj2("sample41a.txt");
    string content;
    obj2>>content;
    cout<<"The content of this file is:"<<content<<endl;
    getline(obj2,content);
    cout<<"The content of this file is: "<<content<<endl;
    obj2.close();
    return 0;
}