// you can use includes, for example:
// #include <algorithm>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A, vector<int> &B, vector<int> &C);
stack<int> vec_to_stack_mergeSort(vector<int> &vec_c);
void merge(int *a, int low, int high, int mid);
void mergesort(int *a, int low, int high);

int main() {
  vector<int> A = {1, 4, 5, 8};
  vector<int> B = {4, 5, 9, 10};
  vector<int> C = {4, 6, 7, 10, 2};
  cout << "planks: ";
  cout << solution(A, B, C);
  cout << endl;
  cin.get();
  cin.get();

  return 1;
}

int solution(vector<int> &A, vector<int> &B, vector<int> &C) {
    // write your code in C++11 (g++ 4.8.2)
unsigned int i = 0;
unsigned int planks_nailed = 0;
int c_top;

stack<int> C_stack = vec_to_stack_mergeSort(C);

while(!C_stack.empty()) {
  c_top = C_stack.top();
  C_stack.pop();

  for(i = 0; i < A.size(); i++) {

    if(c_top >= A[i] && c_top <= B[i]) {
      A[i] = A.back();
      A.pop_back();
      B[i] = B.back();
      B.pop_back();

      planks_nailed++;
    }
  }
}

if(A.size() > 0) { return -1; }
return planks_nailed;
}

stack<int> vec_to_stack_mergeSort(vector<int> &vec_c){

  stack<int> c_stack;
  int size = vec_c.size();

  int c_array[size];
  copy(vec_c.begin(), vec_c.end(), c_array);
  //sort
  mergesort(c_array, 0, size);
  //delete duplicates
  for(int i = 0; i < size; i++) {
    if(vec_c[i] == vec_c[i+1]) { vec_c[i] = -1; }
  }
  //place in stack from back of vector
  int temp;
  while(!vec_c.empty()) {
    if((temp = vec_c.back()) != -1) { c_stack.push(temp); }
    vec_c.pop_back();
  }

  return c_stack;
}

void mergesort(int *a, int low, int high) {
    int mid;
    if (low < high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,high,mid);
    }
    return;
}

void merge(int *a, int low, int high, int mid) {
    int i, j, k, c[high];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        a[i] = c[i];
    }
}
