#include <iostream>
#include <string>
using namespace std;

int main(){


    char str1[100];

    string str ;

    cout << "Enter a string: ";
    // cin.getline(str1, 100, '.');

    // cout << "You entered: " << str1 << endl;

    getline(cin , str);
    cout << "You entered second: " << str << endl;
    return 0;
}