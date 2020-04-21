//
//  main.cpp
//  Lab8 variant3
//
//  Created by Gleb Strelets on 12/4/19.
//  Copyright © 2019 Glib Strilets. All rights reserved.
//




#include "functions.h"
#include "structfunctions.h"
int main(){
    list<double> firts, second, result;
    cout<<"Start of program"<<endl;
    cout<<"List of commands:"<<endl;
    listOfStructuredCommands("double");
    string command;
    while(command !="end"){
        if (command=="read1c") readCin<double>(&firts);
        if (command=="read2c") readCin<double>(&second);
        if (command=="write1s") write<double>(&firts);
        if (command=="write2s") write<double>(&second);
        if (command=="write1f") {
            cout<<"Write name of the file to where shoul list be written"<<endl;
            string z;
            cin>>z;
            writeToFile(&firts, z);
        }
        if (command=="write2f") {
            cout<<"Write name of the file to where shoul list be written"<<endl;
            string z;
            cin>>z;
            writeToFile<double>(&second, z);
        }
        cin>>command;
    }
    
    
    //readCin(firts);
    cout<<"Exit"<<endl;
    return 0;
}

int mainOld(){
    dlist firts, second, result;
    cout<<"Start of program"<<endl;
    cout<<"List of commands:"<<endl;
    listOfCommands();
    string command;
    while(command !="end"){
        if (command=="read1c") readCin(&firts);
        if (command=="read2c") readCin(&second);
        if (command=="write1s") write(&firts);
        if (command=="write2s") write(&second);
        if (command=="write1f") {
            cout<<"Write name of the file to where shoul list be written"<<endl;
            string z;
            cin>>z;
            writeToFile(&firts, z);
        }
        if (command=="write2f") write(&second);
        cin>>command;
    }
    
    
    //readCin(firts);
    cout<<"Exit"<<endl;
    return 0;
}