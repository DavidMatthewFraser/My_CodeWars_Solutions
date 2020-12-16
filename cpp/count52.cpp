#include <iostream>

using namespace std;

int twos = 0;
int fives = 0;

void assertEquals(int a, int b) {
  bool c = (a == b);
  if (c) {cout << "True" << endl;}
  else {cout << "False" << endl;}
}

void count_tf(int n) {
    if (n % 5 == 0) {
      fives++;
      count_tf(n/5);
    }
    else if (n % 2 == 0) {
      twos++;
      count_tf(n/2);
    }
    else {
      // nothing
    }
}

int count_zeros(int n){
  twos = 0;
  fives = 0;
  for(int i=1; i<=n; i++) {
    count_tf(i);
  }
  return min(fives, twos);
}

int main() {
  assertEquals(count_zeros(0), 0);
  assertEquals(count_zeros(7), 1);
  assertEquals(count_zeros(30), 7);
  assertEquals(count_zeros(100), 24);
  assertEquals(count_zeros(1000), 249);
  assertEquals(count_zeros(100000), 24999);
  assertEquals(count_zeros(1000000000), 249999998);
  return 0;
}
