#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    string st="Harry bhai";
    string st2;
    //Opening files using constructor
    //out and in are objects here
    ofstream out("sample40a.txt");//Write operation
    out<<st;

    //Opening files using constructor and reading it
    ifstream in("sample40b.txt");//Read operation
    //in>>st2;  //Cannot read spaces thus use getline function
    getline(in,st2);
    cout<<st2;

    return 0;
}