#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s,float r){
            title = s;
            rating = r;
        }
        virtual void display()=0; //do nothing function --> pure virtual function
};
class CWHVideo : public CWH{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl):CWH(s, r){
            videoLength = vl;
        }
        void display(){
            cout<<"This is the amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" Out of 5 stars"<<endl;
            cout<<"Length of the video is: "<<videoLength<<" minutes"<<endl;
        }
};
class CWHText : public CWH{
    int words;
    public:
        CWHText(string s, float r, int wc):CWH(s, r){
            words = wc;
        }
        void display(){
            cout<<"This is the amazing video with title "<<title<<endl;
            cout<<"Ratings of this text tutorail: "<<rating<<" Out of 5 stars"<<endl;
            cout<<"No of words in this tutorail is: "<<words<<" words"<<endl;
        }
};

int main(){
    string title; 
    float rating, vlen;
    int words;

    // for Code with Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating= 4.89;
    CWHVideo djvideo(title, rating, vlen);
    djvideo.display();  

    // for Code with Harry text
    title = "Django tutorial text";
    words = 433;
    rating= 4.19;
    CWHText djtext(title, rating, words);
    djtext.display();  

    CWH * tuts[2];
    tuts[0] = &djvideo; 
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}