#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int l = 0;
    for(int r = 0; r < nums.size(); r++){
        if(nums[r] != 0){
            swap(nums[l], nums[r]);
            l++;
        }
    }

    for(int i = 0; i < n; i++){
        cout << nums[i];
    }
    return 0;
}