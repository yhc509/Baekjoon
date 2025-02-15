#include <iostream>
#include <deque>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int count;

    cin >> count;

    deque<int> dq;
    for(int i = 1; i <= count; i++) {
        dq.push_back(i);
    }

    while(dq.size() > 1) {
        dq.pop_front();
        if(dq.size() == 1) break;
        int b = dq.front();
        dq.pop_front();
        dq.push_back(b);
    }

    cout << dq.front();

    return 0;
}