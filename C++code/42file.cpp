//FILE I/O open() and eof() functions
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //FILE I/O using
    ofstream out;
    out.open("sample42.txt");
    out<<"This is me";
    out<<"This is me also";
    out<<"This is also me";
    out.close();

    ifstream in;
    string st,st2;
    in.open("sample42.txt");
    //in>>st>>st2;
    //cout<<st<<st2;
    
    while(in.eof()==0)
    {
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}