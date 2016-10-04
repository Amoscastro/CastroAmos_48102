/* 
   File:   main
   Author: Amos Castro 
   Created on October 4th, 2016 12:08 PM
   Purpose:  Sort four different numbers in order of least to greatest
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
    short a,b,c,d;    //Characters for Numbers 
    //Input values
    cout<<"Input Three Numbers ";
    cin>>a>>b>>c>>d;
    
    
    
    //Process values -> Map inputs to Outputs 
    cout<<"From smallest to greatest "<<endl;
    if ((a<b)&&(b>a)&&(b<c)&&(c<d)) cout<<a<<","<<b<<","<<c<<","<<d<<endl;
    else if ((a>b)&&(a<c)&&(c<d)) cout<<b<<","<<a<<","<<c<<","<<d<<endl;
    else if ((b<c)&&(c<a)&&(a<d)) cout<<b<<","<<c<<","<<a<<","<<d<<endl;
    else if ((b<c)&&(c<d)&&(d<a)) cout<<b<<","<<c<<","<<d<<","<<a<<endl;
    else if ((c<b)&&(b<d)&&(d<a)) cout<<c<<","<<b<<","<<d<<","<<a<<endl;
    else if ((c<d)&&(d<b)&&(b<a)) cout<<c<<","<<d<<","<<b<<","<<a<,endl;
    else if ((c))
            

    

    
    
    //Display Output

    //Exit Program
    return 0;
}