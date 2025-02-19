#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{    
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int N;
    cin >> N;

    int input;
    vector<int> v;
    for(int i = 0; i < N; i++) {
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    int sum = 0;
    int time = 0;
    for(int i = 0; i < N; i++) {
        time += v[i];
        sum += time;
    }

    cout << sum << "\n";

    return 0;
}
