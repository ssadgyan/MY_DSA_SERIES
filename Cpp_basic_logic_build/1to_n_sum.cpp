#include <iostream>
using namespace std ;

int main () {

   int sum=0 ,i, n ;

   cout << "enter a number :- " ;
   cin >> n ;
     

   for(i=1;i<=n;i++) {
      sum = sum + i ;
   }
   cout << "sum = " << sum ;
   return 0 ;
}