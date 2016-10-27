/* 
   File:   main
   Author: Amos Castro
   Created on October 27, 2016 11:40AM
   Purpose:  CIS Project: Text based Adventure. 
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
    int menuItm;    //Choice from menu
    
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1  for Assassin"<<endl;
        cout<<"2.  Type 2  for Tank"<<endl;
        cout<<"3.  Type 3  for Mage"<<endl;
        cout<<"4.  Type 4  for Fighter"<<endl;

        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:{
                cout<<"Assassin"<<endl;
                //Input values
                cout<<"Assassins are able to take 3 or less enemies at a time and are masters of escape."<<endl;
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 2:{
                cout<<"Tank"<<endl;
                //Input values
                cout<<"Tanks are very strong able to take on many enemies at a time but at the cost of being very slow."<<endl;
                
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 3:{
                cout<<"Mage"<<endl;
                //Input values
                cout<<"Mages can fight a high number of enemies but they are only effective at a medium range."<<endl;
                
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 4:{
                cout<<"Fighter"<<endl;
                cout<<
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;

            }//End Case
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}