#include <iostream>
using namespace std;

//you can use any data type apart from bool i.e int, float or string it's upon you.
//check on properties of a prime no so that you come up with best algorigthm
// a no is prime if it is divisible by 1 and itself i.e 2, 3, 5, 7 etc. 
//so we take  the no and check numbers behind it if they can divide it or not through for loop iteration
int isPrimeNumber(int number){//int num we are parsing it to our function isPrimeNum
    for (int i = 2; i < number; i++)//we are iterating 2 upto the given number
    {
         if (number % i == 0)//if the inputed no is divisible by any value of i a part from 1 and itself  returns false
           return false;
    }
    return true;  
}
int main(){
    for (int i = 0; i <= 1000; i++)
    {     //we are checking all prime numbers between 1 and 1000 that are prime.
        bool isPrime = isPrimeNumber(i);
        if (isPrime)
           cout << i << " is a prime number\n";
    }
    
}