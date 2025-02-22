#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int N;
    cin >> N;

    vector<int> v;

    int d = 10;
    while(N > 0) {
        int a = N % d;
        N -= a;
        N /= 10;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++)
    cout << v[i];


    return 0;
}