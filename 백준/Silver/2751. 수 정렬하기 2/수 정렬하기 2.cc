#include <iostream>
#include <queue>

using namespace std;

struct compare {
	bool operator() (int a, int b) {
        return a > b;
	}
};

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int count;

    cin >> count;

    priority_queue<int, vector<int>, compare> pq;

    for(int i = 0; i < count; i++) {
        int input;
        cin >> input;
        pq.push(input);
    }

    while(pq.empty() == false) {
        cout << pq.top() << "\n";
        pq.pop();
    }

    return 0;
}