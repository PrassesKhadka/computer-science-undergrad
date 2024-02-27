#include<iostream>
#include<map>
using namespace std;

//Map is an associative array
int main()
{
    map<string,int>marksMap;
    marksMap["Harry"]=98;
    marksMap["Jack"]=59;
    marksMap["Rohan"]=2;
    map<string,int>::iterator iter;
    for(iter=marksMap.begin();iter!=marksMap.end();iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    return 0;
}