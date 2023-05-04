#include <iostream>
using namespace std;
#include "queueslinkedlist.cpp"


int main()
{
    queue1 q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout << q.front() << endl;

    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;

    cout << q.getsize() << endl;
    cout << q.isempty() << endl;

    return 0;
}