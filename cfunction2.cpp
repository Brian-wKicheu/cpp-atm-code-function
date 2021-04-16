#include <iostream>
using  namespace std;


void function(string name, string city, int age =0){
    cout <<"My name is "<< name << endl;
    cout <<"I come from: "<< city << endl;
    if(age !=0)//if age is equal to zero it does not execute
     cout <<"I'm "<< age <<" years old" << endl;
}
int main(){
    //taking input from the console and parsing them to  the function
    string name1, city1;
    int age1;
    cout << "Enter the name : " << endl;
    cin >> name1;
    cout << "Enter the city :" << endl;
    cin >> city1;
    cout << "Enter age : " << endl;
    cin >> age1;

    function(name1, city1, age1);
/*name, city,age might not be the same as from the program 
bt should have  the same data type as those declared in main function
*/

}