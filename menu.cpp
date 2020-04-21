#include <iostream>
#include "functions.h"
using namespace std;
void listOfCommands(){
    cout<<"help: gives list of commands with descriptions"<<endl;
    cout<<"read1c: reads first list of doubles"<<endl;
    cout<<"read2c: reads second list of doubles"<<endl;
    cout<<"write1s: reads first list of doubles"<<endl;
    cout<<"write2s: reads second list of doubles"<<endl;
    cout<<"write1f: reads first list of doubles to file"<<endl;
    cout<<"write2f: reads second list of doubles to file"<<endl;
    cout<<"end: end the program"<<endl;
}
void listOfStructuredCommands(string item){
  item +="s";
    cout<<"help: gives list of commands with descriptions"<<endl;
    cout<<"read1c: reads first list of "<<item<<endl;
    cout<<"read2c: reads second list of "<<item<<endl;
    cout<<"write1s: reads first list of "<<item<<endl;
    cout<<"write2s: reads second list of "<<item<<endl;
    cout<<"write1f: reads first list of "<<item<<" to file"<<endl;
    cout<<"write2f: reads second list of "<<item<<" to file"<<endl;
    cout<<"end: end the program"<<endl;
}
