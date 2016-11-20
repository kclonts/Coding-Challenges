//program to create phone book
//and lookup names. see link below
//https://www.hackerrank.com/challenges/30-dictionaries-and-maps

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class person(string name_, int number_);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int entries;
    vector<person> phone_book;

    cin >> entries;

    string name;
    int number;
    for(int i = 0; i < entries; i++) {
        cin >> name >> number;
        person* p = new person(name, number);
        phone_book.push_back(p);
    }

    sort(phone_book.begin(), phone_book.end());

    string input;
    while((cin >> input) != NULL) {

    }

    return 0;
}

class person {
    string name;
    int number;

    public:
    person(string name_, int number_);
    void personPrint();
    bool isPerson(string name_);
    bool operator<(person& p) const { return name < p->name; }
};

person::person(string name_, int number_) {
    name = name_;
    number = number_;
}

void person::personPrint() {
    cout << name << "=" << number << endl;
}

bool person::isPerson(string name_) {
    return this->name == name_;
}
