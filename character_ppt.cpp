#include <iostream>
using namespace std;

int main(){
    
    int rows;
    char ch;

    cout<<"inter a number rows :- ";
    cin>>rows;

    cout<<"Enter the char you want to start :- ";
    cin>>ch;
//    // char chart = ch;

//     for(int i=0;i<rows;i++){
//          //char ch = 'A';
//         for(int j=0;j<rows;j++){

//             cout<<ch<<" ";
//             ch ++;

//         }cout<<endl;
//         //ch = chart;
//}

for(int i=0; i< rows; i++){
    char ch2 = ch;
    for(int j = 0; j< rows; j++){
        cout<<ch2++;
    }
    cout<<endl;
}
}