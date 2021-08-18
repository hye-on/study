#include <iostream>
using namespace std;

int main(){
  int N;
  long long fact = 1;
  cing >> N;
  for (long long i = N; i>=1; i--) {
    fact = fact * i;
    while(fact % 10 == 0 ) {
      fact /= 10;
    }
    fact %= 100000000;
  }
  fact%= 100000;
  cout << fact << endl;
}
