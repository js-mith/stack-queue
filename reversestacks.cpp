#include<iostream>
using namespace std;
#include <stack>

void reverseStack(stack<int> &input, stack<int> &extra) {
    //Write your code here
    if(input.empty())
    {
        return;
    }
    int x = input.top();
    input.pop();
    reverseStack(input,extra);
    while(!input.empty())
    {
        extra.push(input.top());
        input.pop();
    }
    input.push(x);
    while(!extra.empty())
    {
        input.push(extra.top());
        extra.pop();
    }
}

int main() {
     stack<int> input, extra;
    int size;
    cin >> size;

    for (int i = 0, val; i < size; i++) {
        cin >> val;
        input.push(val);
    }

    reverseStack(input, extra);

    while (!input.empty()) {
        cout << input.top() << " ";
        input.pop();
    }
     
     return 0;
}