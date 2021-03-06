/* 
 * File:   main.cpp
 * Author: Amos Castro Jr.
 * Created on September 29th, 2016 12:03
 * Purpose:  To determine the Band of Radiation from the wave length
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float waveLen;
    //Input or initialize values Here
    cout<<"Input wave length of radiation in Meters"<<endl;
    cout<<"This Program Determines The Band of Radiation."<<endl;
    cin>>waveLen;
    //Process/Calculations Here
   (waveLen>1e-2f)      ?cout<<"Radio Band"<<endl:
   (waveLen>1e-3f) ?cout<<"Micro wave Band"<<endl:
   (waveLen>7e-7f) ?cout<<"Infra-Red Band"<<endl:
   (waveLen>4e-7f) ?cout<<"Visible Band"<<endl:
   (waveLen>1e-8f) ?cout<<"Ultra-Violent Band"<<endl:
   (waveLen>1e-11f)?cout<<"X-Ray Band"<<endl:
                       cout<<"Gamma-Ray Band"<<endl;
    
    //Output Located Here

    //Exit
    return 0;
}
