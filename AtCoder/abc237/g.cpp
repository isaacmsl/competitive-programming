#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define sacola multiset
int main(){
    string s;cin>>s;
    int l=0,r=0;
    while(s[l]=='a')++l;
    while(s[s.size()-1-r]=='a')++r;
    if(l>r){
        cout<<"No\n";
    }else{
        int i=l,j=s.size()-1-r;
        while(i < j){
            if(s[i]!=s[j]){
                cout<<"No\n";
                return 0;
            }
            ++i, --j;
        }
        cout<<"Yes\n";
    }
    return 0;
}