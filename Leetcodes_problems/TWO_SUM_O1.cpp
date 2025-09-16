#include<iostream>
#include<vector>
using namespace std;

vector<int> twosum(vector<int>& nums , int target){

    vector<int> ans;
    int n = nums.size();

    int i=0, j=n-1;

    while(i<j){
        int sum = nums[i] + nums[j];

        if(sum>target){
            j--;
        }else if(sum<target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    return ans;
}

int main(){

   vector<int> nums;
   int target;
   int x;

   cout<<"enter number of elements you want in list  :-  "<<endl;
   cin>>x;

   nums.resize(x);

   cout<<"Enter a elements you want  :-  "<<endl;
   for(int i = 0; i < x; ++i){
    cin >> nums[i];
}


   cout<<"enter a target  :-  "<<endl;
   cin>>target;

    vector<int> result = twosum(nums, target);
    cout << "Indices: ";
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    
    return 0;
}