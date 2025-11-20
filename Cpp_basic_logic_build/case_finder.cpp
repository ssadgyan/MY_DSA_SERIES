#include <iostream>
using namespace std;
int main() {

    char ch;

    cout << "Enter a  character : ";
    cin >> ch;

      if (ch>='a'&&ch<='z'){

        cout<<"it's a lower case : "<< ch << endl;
      } else{
        cout<< "it's a upper case: "<< ch << endl;
      }


    return 0;
}