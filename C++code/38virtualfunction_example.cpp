//Virtual Function_Examples
#include<iostream>
#include<cstring>
using namespace std;

class cwh //code with harry(cwh)
{
    protected:
        string title;
        float rating;
    public:
        cwh(string s,float r)
        {
            title=s;
            rating=r;
        }
        virtual void display(){}    //virtual funciton in play
};

class cwhvideo:public cwh
{
    float videolength;
    public:
        cwhvideo(string s,float r,float vl):cwh(s,r)
        {
            videolength=vl;       
        }
        void display()
        {
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videolength<<" minutes"<<endl;
        }
};

class cwhtext:public cwh
{
    int words;
    public:
        cwhtext(string s,float r,int wc):cwh(s,r)
        {
            words=wc;
        }
        void display()  
        {
            cout<<"This is an amazing text tutorial with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<"out of 5 stars"<<endl;
            cout<<"No of words in this text tutorial is: "<<words<<endl;
        }
};
int main()
{
    string title;
    float rating,vlen;
    int words;

    //For code with harry video 
    title="Django tutorial";
    vlen=4.56;
    rating=4.89;
    cwhvideo djangovideo(title,rating,vlen);
    //djangovideo.display();

    //For code with harry text 
    title="Django tutorial";
    rating=5;
    words=625783;
    cwhtext djangotext(title,rating,words);
    //djangotext.display();

    cwh*tuts[2];
    tuts[0]=&djangovideo;
    tuts[1]=&djangotext;
    
    tuts[0]->display();
    tuts[1]->display();
    return 0;
}