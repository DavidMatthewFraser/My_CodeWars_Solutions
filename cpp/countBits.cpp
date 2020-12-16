#include <iostream>
#include <math.h>
#include <vector>

//https://www.codewars.com/kata/526571aae218b8ee490006f4/train/cpp

using namespace std;

int main() {
  int input = 4;
  int binary;
  vector<unsigned long long> binarys;
  int x = 0;
  int count = 0;
  do {
    binary = pow(2, x);
    binarys.push_back(binary);
    x++;
  } while (binary < input); 
  for(int i=0; i<binarys.size(); i++) {
    cout << binarys.at(i) << endl;
    if(binarys.at(binarys.size()-1-i) <= input) {
      input -= binarys.at(binarys.size()-1-i);
      count++;
    }
  }
  cout << count << endl;
}
