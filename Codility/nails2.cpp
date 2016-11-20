// you can use includes, for example:
// #include <algorithm>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A, vector<int> &B, vector<int> &C);

int main() {
  vector<int> A = {1, 4, 5, 8};
  vector<int> B = {4, 5, 9, 10};
  vector<int> C = {4, 6, 7, 10, 2};
  cout << "planks: ";
  cout << solution(A, B, C);
  cout << endl;
  cin.get();
  cin.get();

  return 1;
}

int solution(vector<int> &A, vector<int> &B, vector<int> &C) {
    // write your code in C++11 (g++ 4.8.2)
unsigned int i = 0;
unsigned int j = 0;
unsigned int planks_nailed = 0;
unsigned int num_nails = C.size();



for(i = 0; i < num_nails; i++) {
  for(j = 0; j < A.size(); j++) {
    if(C[i] >= A[j] && C[i] <= B[j]) {
      A[j] = A.back();
      A.pop_back();
      B[j] = B.back();
      B.pop_back();

      planks_nailed++;
    }
  }
}
if(A.size() > 0) { return -1; }
return planks_nailed;
}
