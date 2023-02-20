// VIRTUAL FUNCTIONS EXAMPLE

/*
    RULES FOR VIRTUAL FUNCTIONS:
1. they cannot be static
2. they are accessed by object pointers
3. Virtual functions can be a friend of another class
4. A function in base class can might not be used.
5. If a virtual function defined in a base class, there is no necessity of redefining it in the derived class [AGAR NHI MILTA DISPLAY FN TO VIRTUAL VALA RUN KAR DE]
*/

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
    virtual void display() { cout << "bogus code" << endl; }
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