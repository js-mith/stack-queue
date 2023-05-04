#include<iostream>
using namespace std;
#include "stackusingarray.h"
#include<stack>

int main() {
stack<int>s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);

cout << s.top() << endl;
s.pop();

cout << s.top() << endl;

cout << s.size() << endl;
cout << s.empty() << endl;

/*
cout << s.top() << endl;

cout << s.pop() << endl;
cout << s.pop() << endl;
cout << s.pop() << endl;

cout << s.size() <<endl;

cout << s.isempty() <<endl;
*/

     return 0;
}