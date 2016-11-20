// you can use includes, for example:
// #include <algorithm>
#include<iostream>
#include<string>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S, string &T) {
    // write your code in C++11 (g++ 4.8.2)

    string hour_sub = S.substr(0, 2);
    string min_sub = S.substr(3, 2);
    int S_hour = stoi(hour_sub);
    int S_minute = stoi(min_sub);

    hour_sub = T.substr(0, 2);
    min_sub = T.substr(3, 2);
    const int T_hour = stoi(hour_sub);
    const int T_minute = stoi(min_sub);

    int strike = 0;

    if(S_minute == 0) { strike += 3; }

    for(; S_hour < T_hour; S_hour++) {
      while(!(S_minute == T_minute && S_hour == T_hour) && S_minute != 60) {
        if(S_minute == 15 || S_minute == 30 || S_minute == 45) { strike++; }
        S_minute++;
      }

      strike += 3;

    }
    return strike;
}
