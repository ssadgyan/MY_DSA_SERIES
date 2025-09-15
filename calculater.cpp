#include<iostream>
using namespace std;


int calculater(int a, int b , int num , int again){

    while(again!= 0)
    {
        if(num==1){
        return a+b;
    }
    else if(num==2){
        return a-b;
    }
    else if(num==3){
        return a*b;
    }
    else if(num==4){
        return a/b;
    }
    else if(num==5){
        return a%b;
    }
    else{
        cout<<"Invalid input"<<endl;
        return 0; }

    }
}

int main(){

     int num,a,b,again=1;
       
        cout<<"if want to add press 1"<<endl;
        cout<<"if want to subtract press 2"<<endl;
        cout<<"if want to multiply press 3"<<endl;
        cout<<"if want to divide press 4"<<endl;
        cout<<"if want to modulus press 5"<<endl;
        
        cout<<"Enter your choice"<<endl;
        cin>>num;
        cout<<"Enter two numbers"<<endl;
        cin>> a>> b;
        cout<<"The result is : "<<calculater(a,b,num , again)<<endl;

        cout<<"if you want to calculate again press 1 else press 0"<<endl;
        cin>>again;

        calculater(a,b,num , again);

         if(again==1){
            main();
         }
         else{
            cout<<"Thank you for using our calculater"<<endl;
         }

        return 0;
    }