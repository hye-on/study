#include <iostream>
using namespace std;

int main() {

    int zero[41] = { 1, 0 };
    int one[41] = { 0, 1 };

    for (int i = 2; i < 41; i++) {
        zero[i] = zero[i - 1] + zero[i - 2];
        one[i] = one[i - 1] + one[i - 2];
    }

    //테스트 케이스 개수 입력
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;

        cout << zero[N] << ' ' << one[N] << '\n';
    }
    return 0;
}
