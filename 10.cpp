/*
Find Prime Number using If Else Condition
*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    bool Prime = true;
    cout<<"Enter a possitive integer ";
    cin>>a;
    for (b = 2; b <= a/2; ++b){
        if (a % b == 0){
            Prime = false;
            break;
        }
    }
    if (Prime)
      cout << "This is a prime number";
  else
      cout << "This is not a prime number";

  return 0;
}