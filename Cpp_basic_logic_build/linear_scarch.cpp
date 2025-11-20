#include <iostream>
using namespace std;

int linear_search(int arr[],int s2,int target){
    for(int i=0;i<s2;i++){
        if(arr[i]==target){
            return i;//found
        }
    }

    return -1;//not found
}

// int main(){
//     int arr[]={10,20,30,40,50};
//     int s2=sizeof(arr)/sizeof(arr[0]);
//     int target;
//     cout<<"Enter the element to be searched: ";
//     cin>>target;

//     int result=linear_search(arr,s2,target);
//     if(result!=-1){
//         cout<<"Element found at index: "<<result<<endl;
//     }
//     else{
//         cout<<"Element not found in the array."<<endl;
//     }

//     return 0;
// }


int main(){
    
    int arr[] ={4,2,7,8,1,2,5};
    int s2 = 7;
    int target = 8;

    cout<<linear_search(arr,s2,target)<<endl;
    return 0;

    
}