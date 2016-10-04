/* 
   File:   main
   Author: Amos Castro Jr.
   Created on October 4th 2016 11:26 Am
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    short a,b;       //Characters for Numbers 1&2
    
    //Input values
    cout<<"Input two Numbers ";
    cin>>a>>b;
    
    
    
    //Process values -> Map inputs to Outputs
    if (a<b) cout<<a<<b<<endl;
    else cout<<"From smallest to Greatest "<<b<<a<<endl;
    
    
    //Display Output
    

    //Exit Program
    return 0;
}
