#include "header.h"
using namespace std;
void rectangle::setWidth(int w){width = w;}
void rectangle::setLength(int l){length = l;}
int rectangle::getWidth(bool ou){
    if(ou){cout<<"Width of the rectangle = "<<width<<endl;}
    return width;
}
int rectangle::getLength(bool ou){
    if(ou){cout<<"Length of the rectangle = "<<length<<endl;}
    return length;
}
int rectangle::gets(bool ou){
    if(ou){cout<<"Area of rectangle = "<<s<<endl;}
    return s;
}
int rectangle::getp(bool ou){
    if(ou){cout<<"Perimeter of a rectangle = "<<p<<endl;}
    return p;
}
void rectangle::countS(){
    setS(width*length);
    gets();
}
void rectangle::countP(){
    rectangle::setP((width+length)*2);
    getp();
}

void rectangle::getInfo(){
    getLength();
    getLength();
};
bool rectangle::testSq(){
    if (width == length) cout<<endl<<"This is a square\n";
    else cout<<endl<<"This is NOT a square\n";
    return (width == length);
}

std::string collRent::getCollor(bool ou){
    if(ou){cout<<"Rectangle has collor: "<<collor<<endl;}
    return collor;
}
void collRent::setCollor(std::string c){
    collor = c;
}


void rectangle::setP(int work){
    p = work;
};
void rectangle::setS(int work){
    s = work;};



//////////



