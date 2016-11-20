
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;


int main(){

    long int a = 0;

    vector<long int> A;

    for(int i = 0; i < 5; i++) {
      cin >> a;
      A.push_back(a);
    }

    sort(A.begin(), A.end());
    long int max = A[1] + A[2] + A[3] + A[4];
    long int min = A[0] + A[1] + A[2] + A[3];

    cout << min << " " << max;

    return 0;
}
