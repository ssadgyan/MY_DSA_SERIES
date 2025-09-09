#include <iostream>
using namespace std;

// void printhello(){

//     cout<<"Hello\n";
// }

// int main(){

//     printhello();

//     return 0;
// }

///////////////next

// int printhello(){

//     cout<<"Hello\n";
//     return 3;
// }

// int main(){

//    int val = printhello();
//     cout<<val;

//     return 0;
// }

/// //next        
 
// int printhello(){

//     cout<<"Hello\n";
//     return 3;
// }

// int main(){

   
//     cout<< printhello();

//     return 0;
// }

///////////Parameter

//sum of two number

// int sum(int a,int b){

//     int s=a+b;
//     return s;
// }

// int main(){

//     //sum(10,5);
//     cout<<sum(10,5)<<endl;
//     return 0;
// }

// min of two

// int minoftwo(int a,int b ){

//     if(a<b){
//         return a;
//     }else{
//         return b;
//     }
// }

// int main(){

//     cout<<"min = "<<minoftwo(5,6)<<endl;
//     return 0;
// }

// int SumN(int n ){

//    int sum =0;
//    for(int i=1;i<=n;i++){
//        sum+=i;
//        //sum=sum+i;
//    }

//    return sum;
// }

// int main(){

//     cout<<"min = "<<SumN(5)<<endl;
//     return 0;
// }

//Factorial of a number

// 


//PASS BY VALUE

int sum(int a, int b){

    a = a+10;
    b = b+10;
    return a+b;
}

int main(){
    int a=5,b=4;

    //cout<<sum(x,y)<<endl; //5,4
    cout<<sum(a, b)<<endl;
    
    cout<<a<<endl;///5
    cout<<b<<endl;//4

    return 0;
}