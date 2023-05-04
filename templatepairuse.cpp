#include <iostream>
using namespace std;
#include "pairclass.cpp"

int main()
{
    pair1<pair1<int , int> , int> p2;
    p2.setY(10);
    pair1<int ,int> p4;
    p4.setX(16);
    p4.setY(5);

    p2.setX(p4);    // internal copy assignment
 
 cout << p2.getX().getX() << " " << p2.getX().getY()<< " " << p2.getY()<<endl;
   



    /*
    pair1<int , double> p1;
    p1.setX(10);
    p1.setY(20.345);

    cout << p1.getX() <<" " << p1.getY() << endl;
  
    pair1<double> p2;

    p2.setX(100.34);
    p2.setY(34.21);

    cout << p2.getX() <<" "<< p2.getY() << endl;
    */

    return 0;
}