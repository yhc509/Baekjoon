#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

struct compare {
    bool operator()(string a, string b) {
        int a_len = a.length();
        int b_len = b.length();
        if(a_len == b_len) {
            return a > b;
        }
        return a_len > b_len;
    }
};

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int c;
    cin >> c;
    
    priority_queue<string, vector<string>, compare> dq;
    for(int i = 0; i < c; i++) {
        string x;
        cin >> x;
        dq.push(x);
    }

    string last;
    while(dq.empty() == false) {
        if(dq.top() != last) {
            cout << dq.top() << "\n";
            last = dq.top();
        }
        dq.pop();
    }
    
    return 0;
}