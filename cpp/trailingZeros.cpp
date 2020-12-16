#include <iostream>

using namespace std;

unsigned long long factorial(int n) {
  long zeros = 0;
  unsigned long long fact = 1;
  for(int i=1; i<=n; i++) {
    int x = i;
    if(x % 10 == 0){
	zeros++;
	x /= 10;
    }
    fact *= x;
    if(fact % 10 == 0){
	zeros++;
	fact /= 10;
    }
  }
  return zeros;
}

int main() {
  int n = 30;
  cout << factorial(n);
  return 0;
}
