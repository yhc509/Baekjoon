#include <iostream>
#include <queue>
#include <map>

using namespace std;

struct student {
    int country;
    int number;
    int score;
};

struct compare {
    bool operator() (student a, student b) {
        return a.score < b.score;
    }
};

int main()
{    
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int N;
    cin >> N;

    priority_queue<student, vector<student>, compare> pq;
    map<int, int> m;
    for(int i = 0; i < N; i++) {
        int c, n , s;
        cin >> c >> n >> s;

        student st;
        st.country = c;
        st.number = n;
        st.score = s;
        pq.push(st);
    }

    int i = 0;
    while(i < 3) {
        auto e = pq.top();
        if(m[e.country] >= 2) {

        }
        else {
            cout << e.country << " " << e.number << "\n";
            m[e.country]++;
            i++;
        }
        pq.pop();
    }


    return 0;
}
