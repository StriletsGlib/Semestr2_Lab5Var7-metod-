#include <iostream>
#include "structfunctions.h"
#include <fstream>
using namespace std;
template<class item>void readCin(list<item> *beg){
    list<item> *cur;
    cur = beg;
    string s ="";
    string errorMessage ="Write down item";
    while (s!="n"){
        item get;
        try{
            cin>>get;
            if(cin.fail()) throw 1;
            //cin>>get;
            //if (!(cin>>get)) {
            //cout<<errorMessage<<endl;
            //    goto fix;
        }
        catch(...){
            cur = NULL;
            break;
        }
        cur->d = get;
        list<item> *newnex = new list<item>;
        //cout<<cur<<endl<<newnex;
        cout<<"If you want to end this list write down n"<<endl;
        cin>>s;
        if (s!="n") {
            cur->next = newnex;
            cur = newnex;
        }
    }
    cout<<"End of reading"<<endl;
}

template<class item>void write(list<item> *beg){
    list<item> *cur;
    cur = beg;
    while (cur!=NULL){
        cout<<cur->d<<endl;
        if (cur!=NULL) cur= cur->next;
        if (cur==NULL) break;
        
    }
    cout<<"End of writing"<<endl;
}



template<class item> void writeToFile(list<item> *beg, string place){
    ofstream outp(place);
    list<item> *cur;
    cur = beg;
    while (cur!=NULL){
        outp<<cur->d<<endl;
        if (cur!=NULL) cur= cur->next;
        if (cur==NULL) break;
    }
};