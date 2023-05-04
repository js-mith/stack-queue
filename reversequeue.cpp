#include<iostream>
using namespace std;
#include <queue>
void reverseQueue(queue<int> &input) {
	// Write your code here
     if(input.empty()){
		 return;
	 }

	 int data = input.front();
	 input.pop();

	 reverseQueue(input);

	 input.push(data);
}

int main() {
         queue<int> q;
        int size;
        cin >> size;

        for (int i = 0, val; i < size; i++) {
            cin >> val;
            q.push(val);
        }

        reverseQueue(q);
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }

        cout << "\n";
    
     return 0;
}