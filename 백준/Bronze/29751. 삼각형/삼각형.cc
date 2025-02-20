#include <iostream>

using namespace std;

int main()
{    
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int W, H;

    cin >> W >> H;

    cout << fixed;
    cout.precision(1);
    cout << (float) W * H / 2 << "\n";

    return 0;
}
