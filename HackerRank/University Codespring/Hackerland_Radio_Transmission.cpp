#include <stack>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int houses_covered(int loc, int range, vector<int> house_locs);
//n = number of houses
//k = range of transmitter
//x[x_i] = location of houses


int main(){
    //num of houses
    int n;
    //range of transmitter
    int k;
    cin >> n >> k;
    vector<int> x(n);
    for(int x_i = 0;x_i < n;x_i++){
       cin >> x[x_i];
    }

    int houses = n;
    int range = k;

    sort(x.begin(), x.end());

    //eliminate multiples
    int num_mult = 0;
    for(int i = 0; i < x.size() - 1; i++) {
      if (x[i] == x[i+1]) {
        x[i+1] = -1;
        num_mult++;
      }
    }
    sort(x.begin(), x.end());
    rotate(x.begin(), x.begin() + num_mult, x.end());
    while(x.back() == -1) { x.pop_back(); }
    //multiples taken out

    int min_trans = 0;
    int most_covered_loc;
    int temp_loc;
    int most_covered;
    int cur_covered;

    while(!x.empty()) {
      min_trans++;
      most_covered = 0;
      most_covered_loc = 0;
      cur_covered = 0;
      temp_loc = 0;

      for(temp_loc = x.front(); temp_loc <= x.back(); temp_loc++) {
        cur_covered = houses_covered(temp_loc, range, x);
        if(cur_covered > most_covered_loc) {
          most_covered = cur_covered;
          most_covered_loc = temp_loc;
        }
      }

      for(int i = 0; x[i] <= most_covered_loc + range; i++) {
          if(x[i] >= most_covered_loc - range) x[i] = -1;
      }

      sort(x.begin(), x.end());
      rotate(x.begin(), x.begin() + num_mult, x.end());
      while(x.back() == -1) { x.pop_back(); }


      for(int i = 0; i < x.size(); i++) cout << x[i] << " ";
      cout << endl;
    }

    cout << endl << min_trans << endl;

    return 0;
}

/*
class loc {
private:
  house = false;
  covered = false;
public:
  bool isHouse() { return house; }
  bool isCovered() { return covered; }
  void setHouse(bool b) { house = b; }
  void setCovered(bool b) { if(house == true) covered = b; }
};
*/

int houses_covered(int loc, int range, vector<int> house_locs) {
    int total_covered = 0;

    for(int i = 0; house_locs[i] <= loc+range; i++) {
      if(house_locs[i] >= loc - range) total_covered++;
    }
    return total_covered;
}

/*
void set_transmitter(int loc, int range, vector<int> Hackerland) {
  for(int i = loc - range; i <= loc + range; i++) { Hackerland[i].setCovered(); }
}*/
