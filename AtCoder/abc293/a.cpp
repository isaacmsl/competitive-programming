#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin, s);

    char temp = ' ';
    for (int i = 1; i <= s.size()/2; i++) {
        temp = s[2*i - 2];
        s[2*i - 2] = s[2*i-1];
        s[2*i-1] = temp;
    }

    cout << s << endl;

    return 0;
}