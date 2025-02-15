#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

struct st {
    int idx;
    int age;
    string name;
};

struct compare {
    bool operator() (st a, st b) {
        if(a.age == b.age) {
            return a.idx > b.idx;
        }
        else {
            return a.age > b.age;
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
        int age;
        string name;
        cin >> age >> name;

        st n = st();
        n.idx = i;
        n.age = age;
        n.name = name;
        dq.push(n);
    }

    while(dq.empty() == false) {
        auto t = dq.top();
        dq.pop();
        cout << t.age << " " << t.name << "\n";
    }

    return 0;
}