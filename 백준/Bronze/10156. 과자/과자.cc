#include <iostream>

using namespace std;


int main()
{    
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int K,N,M;
    cin >> K >> N >> M;

    int totalCost = K * N;
    if(totalCost > M) {
        cout << totalCost - M;
    }
    else {
        cout << "0";
    }

    return 0;
}
