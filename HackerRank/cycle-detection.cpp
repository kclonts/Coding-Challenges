//challenge to detect a cycle in a linked list
//https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle

#include <vector>
#include <algorithm>
using namespace std;
/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as:
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool cmpAddress(int* p, int* j) { return &(*p) < &(*j); }

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method

    if(head == NULL) return false;

    vector<Node*> visited;

    Node* this_ = head;
    visited.push_back(head);
    while((this_ = this_->next) != NULL) visited.push_back(this_);

    sort(visited.begin(), visited.end(), cmpAddress);


    for(vector<Node*>::iterator it = visited.end(); it != visited.begin() + 1; --it) {
        if(&(*it) == &(*(it-1))) return true;
        visited.pop_back();
    }
    return false;
}
