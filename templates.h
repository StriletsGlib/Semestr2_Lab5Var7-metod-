//
//  templates.h
//  Semestr2_Lab4Var7
//
//  Created by Gleb Strelets on 4/21/20.
//  Copyright © 2020 Glib Strilets. All rights reserved.
//
#include <iostream>
template <class num> class rectangleC{
protected:
    num width, length, s = 0, p = 0;
public:
    void reading(){
        num a, b;
        std::cout<<"Wtite down lengh and width\n";
        std::cin>>a>>b;
        setLength(a);
        setWidth(b);
    };
    void setWidth(num w){width = w;};
    void setLength(num l){length = l;};
    void setP(num work){p = work;};
    void setS(num work){s = work;};
    num getWidth(bool ou = true){
        if(ou){std::cout<<"Width of the rectangle = "<<width<<std::endl;}
        return ou;
    }
    num getLength(bool ou = true){
        if(ou){std::cout<<"Length of the rectangle = "<<length<<std::endl;}
        return length;
    };
    num gets(bool ou = true){
        if(ou){std::cout<<"Area of rectangle = "<<s<<std::endl;}
        return s;
    };
    num getp(bool ou = true){
        if(ou){std::cout<<"Perimeter of a rectangle = "<<p<<std::endl;}
        return p;
    };
    void countS(){
        setS((width*length));
        gets();
    };
    void countP(){
        setP((width+length)*2);
        getp();
    };
    rectangleC(){
        width = 10;
        length = 10;
    }
    rectangleC(num a, num b){
        setWidth(a);
        setLength(b);
    }
    rectangleC(rectangleC &a){
        std::cout<<"Copying...\n";
        setWidth(a.getWidth(false));
        setLength(a.getLength(false));
    }
    ~rectangleC(){std::cout<<"\nRectangleCustom dissapeared\n";}
    void getInfo();
    bool testSq(){return width==length;};
    void testCycle(){
        std::string command ="";
        while(command!="stop"){
        getInfo();
        countP();
        countS();
        getp();
        gets();
        reading();
        std::cout<<"\n\nWrite'stop' if you want cycle to stop\n";
        std::cin>>command;
        };
    };
};
template<class num>void rectangleC<num>::getInfo(){
    getLength();
    getLength();
}
