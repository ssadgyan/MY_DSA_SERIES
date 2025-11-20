#include <iostream>
 using namespace std ;

 int answer(int num){

    int fact =1;
     for(int i=2;i<=num;i++){

        fact *= i;
     }
     return fact;
 }

 int main(){

     int num;

    cout<<"Enter a number you want a factorial :-  "<<endl;
    cin>>num;

   cout<<answer(num)<<endl;

    return 0;
 }

   