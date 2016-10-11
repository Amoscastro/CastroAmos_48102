/* 
   File:   Amos Castro
   Created on October 11th, 2016 11:26 AM
   Purpose:  Calculate calories burnt after certain amount of time spent running.
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
    int count=5;           // Time spent on Treadmill.
    float calburn;      //calories Burned running
    //Input values
    
    
    //Process values -> Map inputs to Outputs
    while (count<=35){
    calburn=count*3.6;
    }
    
    //Display Output
    cout<<"Calories Burned"<<calburn<<endl;

    //Exit Program
    return 0;
}