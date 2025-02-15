#include <iostream>
#include <queue>

using namespace std;

struct compare {
	bool operator() (long a, long b) {
        if(a * a == b * b) {
            return a > b;
        }
        else {
            return a * a > b * b;
        }
	}
};

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int count;

    cin >> count;

    priority_queue<long, vector<long>, compare> pq;

    for(int i = 0; i < count; i++) {
        long input;
        cin >> input;

        if(input == 0) {
            if(pq.empty()) {
                cout << "0\n";
                continue;
            }
            cout << pq.top() << "\n";
            pq.pop();
        }
        else {
            pq.push(input);
        }
    }

    return 0;
}