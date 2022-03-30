#include <iostream>
#include <vector>

using namespace std;

int countDigits(int n) {
  int count = 0;

  while (n != 0) {
    n /= 10;
    count++;
  }
  
  return count;
}

int countEvenDigits(vector<int>& nums){
  int count = 0;
  
  for (int n : nums) {
    if (countDigits(n) % 2 == 0) {
      count++;
    }
  }
  
  return count;
}

int main() {
  vector<int> nums { 1, 22, 333, 4444 };

  // cout << countEvenDigits(nums) << endl;

  // 4444  -> 0
  // 444.4 -> 1
  // 44.44 -> 2
  // 4.444 -> 3
  // .4444 -> 4
  // 0
  
  cout << countEvenDigits(nums) << endl;
}