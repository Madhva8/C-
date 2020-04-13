#include <iostream>
using namespace std;
int main(){
    string Name;
    cout<<"What is your Name? ";
    getline(cin, Name);
    cout<<"Hello "<<Name;
    return 0;
}