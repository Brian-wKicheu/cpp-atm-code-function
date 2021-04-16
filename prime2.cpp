#include <iostream>
using namespace std;
bool isPrimeNumber(int number){//int num we are parsing it to our function isPrimeNum
    for (int i = 2; i < number; i++)//we are iterating 2 upto the given number
    {
         if (number % i ==0)//if the inputed no is divisible by any value of i a part from itself  return false
           return false;
    }
    return true;  
}

int main(){
    int number;
    cout <<"Enter number :";
    cin >> number;

    bool isPrimeFlag = isPrimeNumber(number);

    if (isPrimeFlag)
       cout <<number << " is a Prime number. "<<endl;
    else
       cout <<number << " not a Prime number. "<<endl;
}