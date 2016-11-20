//Program to calculate most effective way to
//hook up multiple computers to pairs of hdds
//
//Written as a task on HackerRank; link found below
//https://www.hackerrank.com/challenges/hard-drive-disks


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>



using namespace std;

typedef long long loc;
typedef long long length_wire;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num_pairs, num_computers;
    HDD_Pair *hdd;
    loc temp_prime, temp_sec;
    list<HDD_Pair> *hdds_list;

    cin >> num_pairs >> num_computers;

    for(int i = 0; i < num_pairs; i++) {
        cin >> temp_prime >> temp_sec;

        hdd = new HDD_Pair(temp_prime, temp_sec);
        hdds_list->push(hdd);
    }

    //should be easiest hooking computer
    //to best position connecting all
    //wires
    //then go through adding computers and
    //making it shorter
    return 0;
}


class HDD_Pair(const loc primary_point, const loc secondary_point) {
    private:
    const loc primary = primary_point;
    const loc secondary = secondary_point;

    public:
    //void setPrimary(loc prime_loc) primary = prime_loc;
    //void setSecondary(loc sec_loc) secondary = sec_loc;

    loc getPrimary() { return primary; }
    loc getSecondary() { return secondary; }
}

class comp() {
    private:
    const loc location;
    list<HDD_Pair> hdd_list;

    public:
    void setLoc(const loc point) {
        location = point;
    }

    void addHDDs(HDD_Pair hdds) {
        hdd_list.push_back(hdds);
    }

    length_wire getTotalWireLength() {
        int sum = 0;

        for(int i = 0; i < hdd_list.size(); i++) {
            sum += abs(hdd_list[i].getPrimary() - this.location);
            sum += abs(hdd_list[i].getSecondary() - this.location);
        }
    }
}
