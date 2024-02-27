// Templates in C++
#include <iostream>
using namespace std;

//It's like saying what data type we are going to use 
//will be said later, T is the #custom data type here
//which will be iniitialised later
template <class T>
class vector
{
    public:
    T *arr;  //The data type of array pointer is T #custom data type which will be initialised later 
    //int *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v2)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v2.arr[i];
        }
        return d;
    }
};
int main()
{
    // vector v1(3);
    // v1.arr[0] = 1;
    // v1.arr[1] = 2;
    // v1.arr[2] = 3;
    // vector v2(3);
    // v2.arr[0] = 4;
    // v2.arr[1] = 5;
    // v2.arr[2] = 6;
    // int a=v1.dotproduct(v2);
    // cout<<a<<endl;
    vector <float>v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 2;
    v1.arr[2] = 3;
    vector <float>v2(3);
    v2.arr[0] = 4;
    v2.arr[1] = 5;
    v2.arr[2] = 6;
    float a = v1.dotproduct(v2);
    cout << a << endl;

    return 0;
}