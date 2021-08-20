#include <iostream>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    
    // 엄지
    if (n == 1)
        printf("%lld", 8LL * m);
    else if(n == 5)
        printf("%lld", 8LL * m + 4);
    else 
        printf("%lld", 4LL * m + 1 + (m & 1 ? 4 - n : n - 2));
}
