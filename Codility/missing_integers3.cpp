// you can use includes, for example:
// #include <algorithm>

#include <algorithm>
#include <stack>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)

    sort(A.begin(), A.end());

    for(int i = 0; i < A.size(); i++) {
        if(A[i] < 0) A[i] *= -1;
        else break;
    }

    sort(A.begin(), A.end());

    stack<int> c_stack;

    while(!A.empty()) {
      if(A.back() == 0) break;
      c_stack.push(A.back());
      A.pop_back();
    }

    int temp = 0;
    if(c_stack.top() != 1) return 1;

    while(true) {
      temp = c_stack.top();
      c_stack.pop();
      if(c_stack.size() == 0) return temp + 1;
      if( (temp + 1) < c_stack.top() ) return temp + 1;
    }

    return 1;
}
