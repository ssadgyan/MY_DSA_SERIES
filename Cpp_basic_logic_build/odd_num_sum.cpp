#include <iostream>
using namespace std ;

int main () {

   int sum=0 ,i, n ;
    
   cout << "enter a number :- " ;
   cin >> n ;
     
   for(i=1;i<=n;i++) {
      if(i % 2 != 0) {
         sum += i;

         cout<<i<<" "; // Print the odd number
      }
   }
   cout << "sum = " << sum ;
   return 0 ;
}