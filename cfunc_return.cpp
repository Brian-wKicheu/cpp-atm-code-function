#include <iostream>
using namespace std;
bool isPrimeNumber(int number){//int num we are parsing it to our function isPrimeNum
    bool isPrimeFlag = true;
    for (int i = 2; i < number; i++)//we are iterating 2 upto the given number
    {
         if (number % i ==0)//if the inputed no is divisible by any value of i a part from itself bt it shld return fallse
       {
           isPrimeFlag = false;
           break;
       } 
    }
    return isPrimeFlag;
    
}


int main(){
    //function return type
    //a func that does not return value is like a function that writes a menu to the user
    // a func that returns value is a func that can return a value
    //func returns only ane value

    // function that returns prime number-is only divisible by  1 and itself
    int number;
    cout <<"Enter a number :";
    cin >> number;

    bool isPrimeFlag = isPrimeNumber(number);
    if (isPrimeFlag)
       cout << number << " is a Prime Number "<< endl;
    else
       cout << number << " is not a Prime Number "<< endl;
}