#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{    
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int N, K;
    cin >> N >> K;

    vector<int> v;
    for(int i = 0; i < N; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    cout << v[K-1] << "\n";

    return 0;
}
