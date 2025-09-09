#include <iostream>
using namespace std;
 
int main(){

    int x,y,z;

    cout<<"Enter a first number you want ";
    cin>> x;
    cout<<"Enter a second number you want ";
    cin>> y;
    cout<<"Enter a third number you want ";
    cin>> z;

    int a= x-z;
    int b= y-z;

    if(a>b){
        cout<<"return 1";
    }
    else if (a==b){
        cout<<"return 0";
    }else{
        cout<<"return 2";
    }cout<<endl;

    return 0;
    
}