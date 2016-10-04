/* 
   File:   main
   Author: Amos Castro 
   Created on October 4th, 2016 11:36 AM
   Purpose:  Sort three different numbers in order of least to greatest
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
    short a,b,c;    //Characters for Numbers 
    //Input values
    cout<<"Input Three Numbers ";
    cin>>a>>b>>c;
    
    
    
    //Process values -> Map inputs to Outputs 
    cout<<"From smallest to greatest "<<endl;
    if ((a<b)&&(a<c)&&(b<c)){ cout<<a<<b<<c<<endl;}
    else if ((a<b)&&(a<c)&&(b>c)){ cout<<a<<","<<c<<","<<b<<endl;}
    else if ((a>b)&&(a>c)&&(b<c)){ cout<<b<<","<<c<<","<<a<<endl;}
    else if ((a>b)&&(a>c)&&(b>c)){ cout<<c<<","<<b<<","<<a<<endl;}
    else if ((a<b)&&(a>c)&&(b>c)){ cout<<c<<","<<a<<","<<b<<endl;}
    else if ((a>b)&&(a<c)&&(b<c)){ cout<<b<<","<<a<<","<<c<<endl;}
    

    
    
    //Display Output

    //Exit Program
    return 0;
}