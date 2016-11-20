#include <algorithm>
#include <array>

int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)

    sort(A.begin(), A.end());

    for(int i = 0; i < A.size(); i++) {
      if(A[i] < 0) { A[i] *= -1; }
      else { break; }
    }

    sort(A.begin(), A.end());

    const int size = A.back();

    array<int, size> count;
    for(int i = 0; i <= count.size(); i++) { count[i] = 0; }

    for(int i = 0; i < A.size(); i++) {
        if( A[i] < 0 ) count[A[i] * -1];
        if( A[i] > 0 ) count[A[i]]++;
    }

    int i = 1;
    while(1) {
        if(count[i] == 0) return i;
        i++;
    }

}
