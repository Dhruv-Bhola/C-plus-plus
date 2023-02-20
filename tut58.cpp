// Abstract Base Class
// aisi class jiska matlab hi ye hai ki hum isse nai CLASS banayenge aur fir unke fn run honge
// jiska virtual fn khali ho
// Kam se kam ek pure virtual fn hota hai 


// Pure Virtual Functions
// jisme derived class me new fn banana hi pade
// impose on new fn 

#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()=0; // do-nothing function --> pure virtual function
    // matlab koi aisi class na ban jaye jo meri redefination kare
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << " minutes" << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial is: " << rating << " out of 5 stars" << endl;
        cout << "No of words in this text tutorial is: " << words << " minutes" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for CWH video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;

    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();

    // for CWH text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;

    CWHText djText(title, rating, words);
    djText.display();

    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}