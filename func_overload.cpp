// function overload is using the same function name bt different data types
// example int sum(), double sum(), bool sum()....here sum is the function name bt has been used by int,double,bool
#include <iostream>
using namespace std;
int sum(int a, int b);//we are calling functions here because cpp uses the format of execution from top to bottom
double sum(double a, double b);
float sum(float a, float b, float c);

int main(){
    cout << "The sum of integers is : " << sum(4, 5)<<endl;
    cout << "The sum of doubles is : " << sum(4.5, 5.3)<<endl;
    cout << "The sum of float is : " << sum(3.4, 5.3, 6.2)<<endl;

}

int sum(int a, int b){
    int result = a + b;
    return result;
}
double sum(double a, double b){
    return a + b;
}
float sum( float a, float b, float c){
    return a + b + c;
}