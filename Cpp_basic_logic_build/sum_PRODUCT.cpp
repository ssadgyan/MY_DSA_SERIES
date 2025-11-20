#include <iostream>
using namespace std;

int sum(int arr[] , int n){
    int num=0 ,product= arr[0];
    for(int i=0;i<n;i++){
        num+=arr[i];
        product*=arr[i];
    }
    return num;
}

int main(){

    int n;
    int arr[n];

    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<< sum(arr , n);
    return 0;
}