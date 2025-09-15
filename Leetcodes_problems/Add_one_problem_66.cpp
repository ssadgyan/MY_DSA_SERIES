#include <iostream>
#include <vector>
using namespace std;


int AddOne(const vector<int>& digits){

    int n= digits.pop_back([0,2,3]);
     cout<<n<<endl;
}

int  main(){

    vector<int> digits = {1,2,3};

   cout<<AddOne(digits)<<endl;

    return 0;
}