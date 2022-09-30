#include <iostream>
#include <algorithm>
using namespace std;

int t, n, m;
int A[20001], B[20001];

int main(){
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i=0; i<n; i++)
            cin >> A[i];
        for(int i=0; i<m; i++)
            cin >> B[i];
        
        sort(A, A+n);
        sort(B, B+m);

        int ans = 0, low = 0;
		for(int i = 0; i < n; i++){
			int  high = m -1, mid;
            
			while(low <= high){
				mid = (low + high) / 2;
				if (B[mid] < A[i])
					low = mid + 1;
				else
					high = mid - 1;
			}
			ans += low;
		}
		cout << ans << '\n';
		ans = 0;
    }
}