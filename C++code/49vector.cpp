#include<iostream>
#include<vector>

using namespace std;

template<class T>
void display(vector<T> &v)
{
    cout<<"Displaying the vectors:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        //#either can be used:
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main()
{
    //Ways to create a vector
    vector<int>vec1;   //zero length vector
    vector<char> vec2(4);//4-element character vector
    


    int element,size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter an element to add to this vector ";
        cin>>element;
        vec1.push_back(element);
    }
    vec1.pop_back();
    display(vec1);
    vector<int>::iterator iter=vec1.begin();//iterator just like pointers points towards the address of the vector1.begin() i.e. at beginning
    vec1.insert(iter+1,5,566);//5 copies will be inserted
    display(vec1);
    //vec2.push_back('5');
    //display(vec2);
    vector<char> vec3(vec2);//4-element character vector from vec2
    display(vec3);
    vector<int>vec4(4,3);//4-element vector of 3s
    display(vec4);
    cout<<vec4.size();
    return 0