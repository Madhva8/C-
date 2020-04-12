/*
including math library for finding square root
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double s, result;
    cout<<"Enter the Value you want to find the Square root of:: ";
    cin>>s;
    result = sqrt(s);
    cout<<"The Square Root of "<<s<<" is "<<result; 
    return 0;
}