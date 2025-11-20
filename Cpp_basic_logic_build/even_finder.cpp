#include <iostream>
using namespace std;

int main() {
    
    int num;
    cout << "Enter a number : ";
    cin >> num;

    if(num % 2 == 0){
        cout << "your number is even " << endl;
    } else{
        cout << "your number is odd " << endl;
    }

    return 0;
}

