#include<iostream>
using namespace std;

void print(int num){
    int count =1;
    int i ;
    while(count<=num){
        cout<<count<<"  ";
        count++;
    }
}

int main(){
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;

    print(num);

    return 0;
}