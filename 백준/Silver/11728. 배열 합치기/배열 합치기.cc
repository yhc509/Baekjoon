#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{    
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int N, M;
    cin >> N >> M;

    int in;
    vector<int> a;
    for(int i = 0; i < N; i++) {
        cin >> in;
        a.push_back(in);
    }

    for(int i = 0; i < M; i++) {
        cin >> in;
        a.push_back(in);
    }

    sort(a.begin(), a.end());

    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << "\n";


    return 0;
}
