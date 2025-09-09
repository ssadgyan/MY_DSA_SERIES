#include <iostream>
using namespace std;
int main() {

    int marks;
    cout << "Enter your marks : ";
    cin >> marks;

    if(marks >= 90){
        cout << "Your grade is A+ " << endl;
    } else if(marks >= 80){
        cout << "Your grade is A " << endl;
    } else if(marks >= 70){
        cout << "Your grade is B+ " << endl;
    } else if(marks >= 60){
        cout << "Your grade is B " << endl;
    } else if(marks >= 50){
        cout << "Your grade is C+ " << endl;
    } else if(marks >= 40){
        cout << "Your grade is C " << endl;
    } else if(marks >= 33){
        cout << "Your grade is D " << endl;
    } else{
        cout << "You are fail " << endl;
    }

    return 0;
}