#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define sacola multiset
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    sacola<int> s[n+1];
    map<int, set<int>> h;
    int q;cin>>q;
    while(q--){
        int t,i;cin>>t;
        if(t==1){
            int j;cin>>i>>j;
            s[j].insert(i);
            h[i].insert(j);
        }else if(t==2){
            cin>>i;
            vector<int> l = vector<int>();
            for(int c : s[i]){
                l.push_back(c);
            }
            if (l.size()){
                cout<<l[0];
                for(int i=1;i<l.size();++i)
                    cout<<' '<<l[i];
            }
            cout<<endl;
        }else{
            cin>>i;
            vector<int> l = vector<int>();
            for(int c : h[i]){
                l.push_back(c);
            }
            if (l.size()){
                cout<<l[0];
                for(int i=1;i<l.size();++i)
                    cout<<' '<<l[i];
            }
            cout<<endl;
        }
    }
    return 0;
}