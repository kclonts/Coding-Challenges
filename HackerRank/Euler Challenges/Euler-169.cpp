//challenge taken from HackerRank.com
//https://www.hackerrank.com/contests/projecteuler/challenges/euler169
//The challenge is to express how many ways a number can be
//expressed as a sum of interger powers of two
//using each power no more than twice


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> find_all_powers(int base);
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int input = 0;
    cin >> input;
    vector<int> powers = find_all_powers(input);

    
    return 0;
}


vector<int> find_all_powers(int base) {
    vector<int> powers;
    for(int i = 1; i <= base; i *= 2) powers.push_back(i);
    return powers;
}
