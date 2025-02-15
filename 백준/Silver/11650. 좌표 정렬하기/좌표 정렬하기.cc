#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

struct st {
    int x;
    int y;
};

struct compare {
    bool operator() (st a, st b) {
        if(a.x == b.x) {
            return a.y > b.y;
        }
        else {
            return a.x > b.x;
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int c;
    cin >> c;

    priority_queue<st, vector<st>, compare> dq;
    for(int i = 0; i < c; i++) {
        int x, y;
        cin >> x >> y;

        st n = st();
        n.x = x;
        n.y = y;
        dq.push(n);
    }

    while(dq.empty() == false) {
        auto t = dq.top();
        dq.pop();
        cout << t.x << " " << t.y << "\n";
    }

    return 0;
}