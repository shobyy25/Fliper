#include <bits/stdc++.h>

using namespace std;

int main(){
    int _; cin>>_;
    while(_--){
        int n; cin>>n;
        string s, t;
        cin>>s>>t;
        int i = 0;
        bool temp = true;
        while(i<n){
            while(i<n && s[i] == t[i]) i++;
            if(i==n) break;
            bool flag = false;
            if(s[i] == 'b' && t[i] == 'c'){
                i++;
                while(i<n && s[i] == 'c' && t[i] == 'c') i++;
                if(i<n){
                    if(s[i] == 'c' && t[i] == 'b') flag = true;
                }
            }
            if(s[i] == 'a' && t[i] == 'b'){
                i++;
                while(i<n && s[i] == 'b' && t[i] == 'b') i++;
                if(i<n){
                    if(s[i] == 'b' && t[i] == 'a') flag = true;
                }
            }
            if(flag == false){
                temp = false;
            }
            i++;
        }
        if(temp) cout<<"YES\n";
        else cout<<"NO\n";
    }
}