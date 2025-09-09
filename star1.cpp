#include <iostream>
using namespace std;

int main (){

    int star , num;
    cout<<"Enter the number of rows: ";
    cin>>num;

    cout<<"Enter the number of stars in each row: ";
    cin>>star;

    for(int i=1;i<=num;i++){
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}