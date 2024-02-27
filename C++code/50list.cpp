//List in C++
#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for(it=lst.begin();it!=lst.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    list<int>list1;//list of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1); 


    list<int>list2(3);//Empty list of size 7
    list<int>::iterator iter;
    iter=list2.begin();
    *iter=45;
    iter++;
    *iter=6;
    iter++;
    *iter=9;
    iter++;
    //Removing elements from the list 
    //list2.pop_back();
    //list2.pop_front();
    //list2.remove(6);
    display(list2);

    //Sorting the list 
    //list1.sort();
    //display(list1);

    //Merging
    list1.merge(list2);
    cout<<"List 1 after merging:";
    display(list1);

    //Reversing the list
    list1.reverse();
    display(list1);


    return 0;
}