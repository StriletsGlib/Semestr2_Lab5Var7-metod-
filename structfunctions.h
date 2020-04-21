#include <iostream>
using namespace std;
template<class item>class list{
  private:
  item d;
  list *next = NULL;
  template<class item>void write(list<item> *beg);
  template<class item>list<item>* readFile(string);
  template<class item>void readCin(list<item> *beg);
  template<class item>void writeToFile(list<item> *beg, string place ="outp.txt");
};