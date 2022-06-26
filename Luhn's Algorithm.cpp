#include <bits/stdc++.h>
#define ccNumberPart int
#define ccNumberInsert cin >>
#define printValid cout << "CC is valid!" << "\n";
#define printInvalid cout << "Invalid CC number!" << "\n";
using namespace std;
int res = 0;
ccNumberPart CC1, CC2, CC3, CC4;

int digitSum(int n) {
  int sum = 0;
  while (n > 0) {
    int k = n % 10;
    sum += k;
    n /= 10;
  }
  return sum;
}

bool validityCheck(int n) {
  if (n % 10 == 0) {
    return true;
  }
  return false;
}

int algorithm(int n) {
  int sum = 0, digit = 4;

  while (n > 0) {
    int q = n % 10;
    if (digit % 2 == 0) {
      sum += q;
      n /= 10;
      digit--;
    } else {
      q *= 2;
      if (q > 9) {
        q = digitSum(q);
      }
      sum += q;
      n /= 10;
      digit--;
    }
  }
  return sum;
}

int main() {
  cout << "Enter your CC number details, 4 by 4 digits." << endl;
  ccNumberInsert CC1 >> CC2 >> CC3 >> CC4;
  res = algorithm(CC1) + algorithm(CC2) + algorithm(CC3) + algorithm(CC4);
  if (validityCheck(res)) {
    printValid;
  } else printInvalid;

  return 0;
}