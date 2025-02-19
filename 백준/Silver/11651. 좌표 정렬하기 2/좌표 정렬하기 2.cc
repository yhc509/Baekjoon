#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct compare {
    bool operator() (pair<int, int> a, pair<int, int> b) {
        if(a.second == b.second) {
            return a.first > b.first;
        }
        return a.second > b.second;
    }
};

int main()
{    
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int N;
    cin >> N;

    int x,y;
    priority_queue<pair<int, int>, vector<pair<int,int>>, compare> pq;
    for(int i = 0; i < N; i++) {
        cin >> x >> y;
        pq.push(make_pair(x,y));
    }

    while(pq.empty() == false) {
        auto a = pq.top();
        cout << a.first << " " << a.second << "\n";
        pq.pop();
    }

    return 0;
}
