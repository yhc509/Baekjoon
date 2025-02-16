#include <iostream>
#include <queue>

using namespace std;

struct compare {
    bool operator()(int a, int b) {
        return a > b;
    }
};

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int N;
    cin >> N;

    priority_queue<int, vector<int>, compare> pq;
    for(int i =0;i < N; i++) {
        int x;
        cin >> x;

        if(x > 0) {
            pq.push(x);
        }
        else {
            if(pq.empty()) {
                cout << "0\n";
            }
            else
            {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
    }

    
    return 0;
}