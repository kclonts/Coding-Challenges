#include <string>
#include "chimes.cpp"

string start_time;
string end_time;

cout << "program to count number of chimes";

cout << "input a start time, format HH:MM";
cin >> start_time;
cout << endl;

cout << "input an end time, format HH:MM";
cin >> end_time;
cout << endl;

int sol = solution(start_time, end_time);
cout << sol;
cout << endl;
