#include <iostream>

using namespace std;


//template <class T>
struct Node {
    char data;
    Node *next;
};

void printData(Node *head) {
    //******************
    Node *printTemp = head;
    while(printTemp != NULL) {
        cout << printTemp->data;
        printTemp = printTemp->next;
    }
    cout << " end_here " << endl;
    //*******************
}


class Solution {
    //Write your code here
    Node *head = new Node;

    public:
    void pushCharacter(char ch);
    char popCharacter();
    void enqueueCharacter(char ch);
    char dequeueCharacter();
};

void Solution::pushCharacter(char ch) {
    Node *push = new Node;
    push->data = ch;

    if(head->next != NULL) { push->next = head->next; }
    head->next = push;
}

char Solution::popCharacter() {
    char temp = head->next->data;
    Node *temp_p = new Node;
    temp_p = head->next;

    if(head->next->next != NULL) head->next = head->next->next;
    delete temp_p;
    printData(head);
    return temp;
}

void Solution::enqueueCharacter(char ch) {
    Node *temp_p = new Node;
    temp_p = head;
    while(temp_p->next != NULL) temp_p->next = temp_p->next->next;
    Node *n = new Node;
    n->data = ch;

    temp_p->next = n;
}

char Solution::dequeueCharacter() {
    char temp = head->next->data;
    Node *temp_p = new Node;
    temp_p = head->next;

    if(head->next->next != NULL) head->next = head->next->next;
    delete temp_p;
    printData(head);
    return temp;
}
