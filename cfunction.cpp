#include <iostream>
using namespace std;

void function(string name, string city, int age =0){
    cout <<"My name is "<< name << endl;
    cout <<"I come from: "<< city << endl;
    if(age !=0)//if age is equal to zero it does not execute
     cout <<"I'm "<< age <<" years old" << endl;
}
int main (){
    //cpp executes program from top to bottom hence if you declare function at the bottom  without  proper 
    //definition it brings error 
    // void means return nothing
    //in functions we have parameters and arguements 
    // functions helps code reusabilty 
    
    function("Brian",  "Nairobi", 21);
    cout <<endl;
    function("Philip Kicheu",  "Mombasa", 0);
    
}