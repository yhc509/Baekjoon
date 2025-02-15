#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);

    int people;
    int size[6];
    int t, p;

    cin >> people;

    for(int i = 0 ; i < 6; i++) {
        cin >> size[i];
    }
    cin >> t >> p;

    int t_min = 0;
    int p_set, p_single;
    for(int i = 0 ; i < 6; i++) {
        t_min += (size[i] / t);
        if(size[i] % t > 0) t_min++;
    }
    p_set = people / p;
    p_single = people % p;

    cout << t_min << "\n";
    cout << p_set << " " << p_single;

    return 0;
}