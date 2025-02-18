#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int N, L;
    cin >> N >> L;

    vector<int> p;
    int input;
    for(int i = 0; i < N; i++) {
        cin >> input;
        p.push_back(input);
    }
    sort(p.begin(), p.end());

    int result = 0;
    int c = 0;
    for(int i = 0; i < N; i++) {
        if(c <= p[i]) {
            c = p[i] + L;
            result++;
        }
    }

    cout << result;

    return 0;
}