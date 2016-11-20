//find challenge below
//https://www.hackerrank.com/challenges/apple-and-orange

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int s;
    int t;
    //house from s - t inclusive
    cin >> s >> t;
    int a;
    int b;
    //trees a and b
    cin >> a >> b;
    int m;
    int n;
    //used for apple and orange vector
    cin >> m >> n;

    int apple_loc_rel;
    int orange_loc_rel;
    vector<int> apple(m);
    for(int apple_i = 0; apple_i < m; apple_i++){
       cin >> apple_loc_rel;
       apple[apple_i] = a + apple_loc_rel;
    }
    vector<int> orange(n);
    for(int orange_i = 0; orange_i < n; orange_i++){
       cin >> orange_loc_rel;
       orange[orange_i] = b + orange_loc_rel;
    }


    sort(apple.begin(), apple.end());
    sort(orange.begin(), orange.end());

    int apples_hit = 0;
    int oranges_hit = 0;

    while(!apple.empty()) {
      if(apple.back() < s) break;
      if(apple.back() <= t && apple.back() >= s) apples_hit++;
      apple.pop_back();
    }

    while(!orange.empty()) {
      if(orange.back() < s) break;
      if(orange.back() <= t && orange.back() >= s) oranges_hit++;
      orange.pop_back();
    }


    cout << apples_hit << endl;
    cout << oranges_hit << endl;

    return 0;
}
