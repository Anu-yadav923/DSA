/*Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"] */

#include<bits/stdc++.h>
using namespace std;

void swap(char &l, char &r){
char temp = l;
l = r;
r = temp;

}

vector<char> reverse_string(vector<char> s){
    int l = 0;
    int r = s.size() - 1;
    while(l < r){
        swap(s[l], s[r]);
        l++;
        r--;
    }
    return s;
}

int main(){
    int n;
    cin >> n;
    vector<char> s(n);
   

    for(int i = 0; i < n; i++){
          cin >> s[i];
    }
    
    vector<char>ans = reverse_string(s);
    for(char i : ans){
        cout << i;
    }
    return 0;


}