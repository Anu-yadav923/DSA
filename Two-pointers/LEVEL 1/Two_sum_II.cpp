#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n;

    int target;
    cin >> target;

    vector<int>ans(n);
    for(int i = 0; i<n; i++){
        cin >> ans[i];
    }

    int l = 0;
   int r = n - 1;
   
    while(l < r){
        if(ans[l] + ans[r] == target){
           
           cout <<  "target indexes are :";
            cout << l << " " << "," << r;
           // cout << "[" << l << "," << r << "]";
            return 0;
        } else if(ans[l] + ans[r] > target){
            r--;
        } else{
            l++;
        }
    }
    return 0;
}