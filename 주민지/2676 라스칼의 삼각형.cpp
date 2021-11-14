#include <iostream>
 
using namespace std;
 
int main() {
    int t;
    long long n, m;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> m;
        cout << 1 + (n - m) * m << '\n';
    }
    return 0;
}
