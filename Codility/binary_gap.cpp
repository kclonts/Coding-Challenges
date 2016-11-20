// you can use includes, for example:
// #include <algorithm>
#include <stack>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // write your code in C++11 (g++ 4.8.2)
    stack<int> binary;
    int r = N;

    do {
      binary.push(r%2);
    }while((r = r/2) != 0);

    int j = 0;
    bool gap = false;
    int large_gap = 0;

    int top;
    while(!binary.empty()) {
    top = binary.top();
    binary.pop();

      switch(top) {
        case 0:
        if(gap == false) { ; }
        else { j++; }
        break;

        case 1:
        if(gap == false) { gap = true; }
        else{
            if( j > large_gap) { large_gap = j; }
            j = 0;
        }
        break;
      }
    }

    return large_gap;
}
