#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

char m[20][20];

void explode(int many, int x, int y) {
    if (many < 0 || x < 0 || x > 19 || y < 0 || y > 19) return;
    m[x][y] = '.';
    explode(many - 1, x + 1, y);
    explode(many - 1, x, y + 1);
    explode(many - 1, x, y - 1);
    explode(many - 1, x - 1, y);
}

struct Bomb {
    int many;
    int x;
    int y;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int r, c;
    cin >> r >> c;
    vector<Bomb> ns;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            char c;
            cin >> c;
            m[i][j] = c;
            if (isdigit(c)) {
                ns.push_back({c - '0', i, j});
            }
        }
    }

    for (const auto& n : ns) {
        explode(n.many, n.x, n.y);
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << m[i][j];
        }
        cout << endl;
    }
    
    return 0;
}