#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while(n--) {
        string a;
        cin >> a;
        if (a == "and" || a == "not" || a == "that" || a == "the" || a == "you") {
            cout << "Yes\n";
            return 0;
        }
    }

    cout << "No\n";

    return 0;
}