// you can use includes, for example:
// #include <algorithm>
#include <vector>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A, vector<int> &B, vector<int> &C) {
    // write your code in C++11 (g++ 4.8.2)

int num_nails = 0;
unsigned int i, j, k;
unsigned int num_planks = A.size();


vector<bool> if_nail(num_planks);
for(i = 0; i < num_planks; i++) { if_nail[i] = false; }

//go through all nails
for(i = 0; i < C.size(); i++) {
  //check each nail to planks
  for(j = 0; j < num_planks; j++) {
    //check if nail fits into planks
    if(C[i] >= A[j] && C[i] <= B[j]) {
      //check if nail exists in planks
      for(k = 0; k < if_nail.size(); k++) {
        if(if_nail[k] == true) { break; }
        //add nail
        else {
          num_nails++;
          if_nail[k] = true;
        }
      }
    }
  }
}
for(i = 0; i < if_nail.size(); i++) {
  if(if_nail[i] == false) { return -1; }
}
return num_nails;
}
