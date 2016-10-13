/* 
   File:   main
   Author: Amos Castro 
   Created on October 13th 2016 11:26 AM
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <fstream>
#include <string> 
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    ifstream in,out;
    ofstream out;
    int row,col;
    string line;
    
    //Input values
    in.open("map.dat");
    in>>row>>col;
    in.ignore();
    cout<<"rows = "<<row<<"columns = "<<col<<endl;
        
    // Where do you place the player 
    int prow,pcol;
    cout<<"Where to position the player in row and column"<<endl;
    cin>>prow>>pcol;
    cout<<"Player position in Y = "<<prow<<"PLayer in X = "<<pcol<<endl;
    
    //Read Back in the file
    in.close();
    in>>row>>col;
    cout<<"row = "<<row<<" col = "<<col<<endl;
    
    //Display Output / what is in the file
    // IN addition add in row numbers and column numbers for the user
    out.open("player.dat");
    getline(in,line);
    for(int row=1;row<=row;row++){
    getline(in,line);
    if(row==prow&&line[pcol-1]=='0')line[pcol-1]='P';
    cout<<row<<" "<<line<<endl;
 }

    
    //Exit Program
    return 0;
}