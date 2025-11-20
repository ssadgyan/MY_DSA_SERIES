#include <iostream>
using namespace std;

int main() {
      
     int num ,i ;
     bool isPrime = true;

     cout<<"Enter a number: ";
     cin>>num;
     
    for(i = 2;i*i<=num; i++){ //non prime //i<=nnum-1
        if(num % i == 0){
            isPrime = false;
            break;
            
    }
    }
    if(isPrime == true){
        cout<<num<<" is a prime number."<<endl;
    }else{
        cout<<num <<"  non prime"<<endl;
    }
    return 0;

}