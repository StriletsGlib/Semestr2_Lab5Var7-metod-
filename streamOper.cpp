#include "header.h"
using namespace std;
ostream& operator <<(ostream& s, rectangle& a){
    s<<"With of the rectangle = "<<a.getWidth(false)<<"\nLength of rectangle = "<<a.getLength(false)<<"\n";
    return s;
};
istream& operator >>(istream& s, rectangle& a){
    int l, w;
    string testLength, testWeight;
    s>>testLength>>testWeight;
    if(testForInt(testLength)&testForInt(testWeight)){
        stringstream transform(testLength+" "+testWeight);
        transform>>l>>w;
        a.setLength(l);
        a.setWidth(w);
    }
    else {
        cout<<"Error: you can't put char or string into int";
    }
    return s;
};
ostream& operator <<(ostream& s, collRent& a){
    s<<"With of the rectangle = "<<a.getWidth(false)<<"\nLength of rectangle = "<<a.getLength(false)<<"\nCollor of rectangle = "<<a.getCollor(false)<<endl;
    return s;
};
istream& operator >>(istream& s, collRent& a){
    int l, w;
    string col, testLength, testWeight;
    s>>testLength>>testWeight>>col;
    if(testForInt(testLength)&testForInt(testWeight)){
        stringstream transform(testLength+" "+testWeight);
        transform>>l>>w;
        a.setLength(l);
        a.setWidth(w);
        a.setCollor(col);
    }
    else {
        cout<<"Error: you can't put char or string into int";
    }
    return s;
};
bool testForInt(string t){
    bool r = true;
    for (int i = 0; i<t.length(); i++){
        if ((t[i]>'9') or (t[i] <'0')) r = false;
    }
    return r;
}
