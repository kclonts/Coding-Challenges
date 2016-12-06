//program to create phone book
//and lookup names. see link below
//https://www.hackerrank.com/challenges/30-dictionaries-and-maps

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

//************************
class person {
    string name;
    int number;

    public:
    person(string name_, int number_);
    void personPrint()                  { cout << name << "=" << number << endl; }
    bool personMatch(string name_)      { return this->name == name_; }
    string getName()                    { return this->name; }
    bool operator<(person& p) const     { return name < p.name; }
    bool operator==(string in_name) const   { return name == in_name; }
	bool operator==(person& p) const { return p.name == name;  }
};

person::person(string name_, int number_) {
    name = name_;
    number = number_;
}

//******************************

/*bool printIfFound() {
    if(name == b.getName()) {
        b.personPrint();
        return true;
    }

    else return false;
}*/


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int entries;
    vector<person> phone_book;

    cin >> entries;

    string name;
    int number;
    for(int i = 0; i < entries; i++) {
        cin >> name >> number;
        person p = person(name, number);
        phone_book.push_back(p);
    }

    //sort(phone_book.begin(), phone_book.end());

    bool isEnd = false;
    vector<string> inputs;
    while(isEnd == false) {
        string temp;
        cin >> temp;
        if(temp != "") inputs.push_back(temp);

        else isEnd = true;
    }

    for(int i = 0; i < inputs.size(); i++){
        bool found = false;
        for(int j = 0; j < phone_book.size(); j++) {
        /*if(!binary_search(phone_book.begin(), phone_book.end(), inputs[i])) {
            cout << "Not Found" << endl;
        }*/
        //phone_book[i].personPrint();
            if(phone_book[i] == inputs[j]) {
                phone_book[i].personPrint();
                found = true;
            }
        }
        if(found == false) cout << "Not found" << endl;
    }

    return 0;
}
