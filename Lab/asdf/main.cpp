/* 
   File:   main
   Author: Amos Castro
   Created on October 6th, 2016 11:26 AM
   Purpose:Calculate Dr. Lehr's weight.
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
float GRAVITY=6.673E-8f;    //universal gravity constant cm^3/g/sec^2
float CNKGGRM=1000;         //Conversion Kilograms to Grams
float CNSGGRM=14593.9;      //Conversion of Slugs to Grams
float CNVKMMET=1000;        // conversion from kilometers to Meters
float CNMETCM=100;          //Conversion from meters to Centimeters
float CNDYNLB=2.24809e-6f   //Conversion from Dynes to Pounds
float CNSGLBS=32.174f;      //Conversion from Slugs to Pounds 


//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float msEarth=5.972e24;   //Google lookup ->Kilograms
    float msMark=6.0f;        //Mass of Mark -> slug
    float rdEarth=6371.0f;    //Google radius of the Earth
    float weight;             //Force of attraction from Physics
    //Input values
    msEarth*=CNKGGRM;          //convert mass of the earth to grams
    msMark*=CNSGGRM;          // Convert mass of Mark to Grams
    rdEarth*=CNVKMMET*CNMETCM; //convert the radius of the earth to centimeters
    
    
    
    //Process values -> Map inputs to Outputs
    weight=GRAVITY*msMark*msEarth/rdEarth/rdEarth;//Weak force attraction due to gravity
    weight*=CNDYNLB;
    
    //Display Output
    cout<<"According to the Weak Force of Gravity Mark Weighs = "<<weight<<"lbs"<<endl;
    cout<<"As a check Mark weighs  = "<<6*CNSGLBS<<"lbs"<<endl;
    cout<<"The percentage error on the Radius of Earth +-"<<100.0f*18/6371<<"%"<<endl;
    

    //Exit Program
    return 0;
}
