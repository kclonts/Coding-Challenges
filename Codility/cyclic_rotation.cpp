// you can use includes, for example:
// #include <algorithm>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &A, int K) {
    // write your code in C++11 (g++ 4.8.2)

    if(A.empty()) return A;


    vector<int> B;


    B.resize(A.size());

    int real_move = K % A.size();
    int i = 0;
    for(i = 0; i < A.size() - real_move; i++) {
      B[i + real_move] = A[i];
    }

    int j = 0;
    while( i < A.size() ) {
      B[j++] = A[i++];
    }

    return B;

}
