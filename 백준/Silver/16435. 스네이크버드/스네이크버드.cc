#include <iostream>
#include <queue>

using namespace std;

struct compare {
    bool operator() (int a, int b) {
        return a > b;
    }

};

int main()
{    
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int N, L;
    cin >> N >> L;

    priority_queue<int, vector<int>, compare> pq;
    for(int i = 0; i < N; i++) {
        int h;
        cin >> h;
        pq.push(h);
    }

    while(pq.empty() == false) {
        int h = pq.top();
        if(L >= h) {
            pq.pop();
            L++;
        }
        else {
            break;
        }
    }

    cout << L << "\n";

    return 0;
}
