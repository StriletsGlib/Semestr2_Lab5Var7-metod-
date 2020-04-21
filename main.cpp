//~

#include "header.h"


int main() {
    rectangle first;
    rectangle second(12, 435);
    collRent colFirts;
    collRent colSecond(34, 123, "Green");
    askQuestion();
    taskCheck(first, second, colFirts, colSecond);
    rectangle copy1(second);
    collRent copy2(colSecond);
    rectangle r1;
    r1 = first;
    r1.getInfo();
    collRent c1;
    c1 = colFirts;
    c1.getInfo();
    rectangleC<double> temptest;
    std::cout<<"\n  Testing template rectangle with double\n input lengh and width of custom rectangle";
    temptest.testCycle();
    return 0;
}

