#include<bits/stdc++.h>
using namespace std;

int main(){
   
    string str;
    getline(cin, str);
    
    int l = 0;
    int r = str.size() - 1;

    while(l < r){
        while(l < r && !isalnum(str[l]))l++;
        while(l < r && !isalnum(str[r])) r--;

        if(tolower(str[l]) != tolower(str[r])){
            cout << "false";
            return 0;
        }
        l++;
        r--;
    }
    cout << "true";
    return 0;
}