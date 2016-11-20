// you can use includes, for example:
// #include <algorithm>
#include <math.h>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)

    unsigned int pos_base = 0;
    vector<int> B;

    for(int i = 0; i < A.size(); i++) {
      pos_base += pow(2, i) * A.back();
      A.pop_back();
    }

    unsigned int hex_val = 0xAAAAAAAA;

    unsigned int return_val = (pos_base + hex_val) ^ hex_val;

    cout << return_val;

    return A;
}











/*
    //bool need_flip = true;
    int carry = 1;

    //flip the bits & add 1
    for (int i = 0; i < A.size(); i++) {
      if(A[i] == 0) A[i] = 1;
      else A[i] = 0;

      if(carry == 1) {
        if(A[i] == 0 && carry == 0) {
          A[i] = 1;
          carry = 0;
        }
        else if(A[i] == 0 && carry == 1) {
          A[i] = 0;
          carry = 1;
        }
        else if(A[i] == 1 && carry == 0) {
          A[i] = 0;
          carry = 1;
        }
        else if(A[i] == 1 && carry == 1) {
          A[i] = 1;
          carry = 1;
        }
       }
    }
    A.reverse();
    while(A.back() != 0) {

    }

    return

}
*/
