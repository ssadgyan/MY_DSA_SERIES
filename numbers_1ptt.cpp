#include <iostream>
using namespace std;

int main(){
    
    int num,count,rows;
    cout<<"inter a number 1to n  :- ";
    cin>>num;

    cout<<"inter a number rows :- ";
    cin>>rows;

    for(int i=1;i<=rows;i++){

        for(count=1;count<=num;count++){

            cout<<count<<" ";

        }cout<<endl;
    }
}