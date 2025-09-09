#include <iostream>
using namespace std;

int main() {

    char num ='A';
    int  n;
    cout<<"enter a number you want :-";
    cin>>n;

    for (int i=0;i<n;i++){

        for(int j=0;j<n;j++){

            cout<<num;
            num++;
        }cout<<endl;
    }
    return 0;
}