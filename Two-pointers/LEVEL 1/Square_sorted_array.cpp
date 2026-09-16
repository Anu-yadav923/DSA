#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int>result(n);
    for(int i = 0; i < n; i++){
        cin >> result[i];
    }
    for(int i = 0; i < n; i++){
        result[i] = result[i]*result[i];
    }

    int l = 0;
    int r = n - 1;
    while(l < r){
        if(result[l] >= result[r]){
            swap(result[l], result[r]);
            
        } 
        r--;
    }

    for(int i = 0; i < n; i++){
        cout << result[i] << " ";
    }
    return 0;
}