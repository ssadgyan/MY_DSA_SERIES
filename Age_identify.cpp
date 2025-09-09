#include <iostream>
using namespace std;

int main() {

int age;
cout << "Enter  a your age : ";
cin >> age;

if(age>= 18){
    cout << "you have a right to Vote " << endl;
} else{
       cout << "no you are under 18 " << endl; 
}
return 0;
}