#include <iostream>
using namespace std;
template <typename T,typename V>
class Pair{
T x;
V y;
public:
//setting and getting x
void setX(T x) { this->x = x;}
T getX() { return x;}
//setting and getting y
void setY(V y){this -> y = y;}
V getY() { return y;}
};

int main() {
    Pair<Pair<int,int>,Pair<int,int> > p1;
    Pair<int ,int> p2;
    p2.setX(1);
    p2.setY(2);
    Pair<int ,int> p3;
    p3.setX(3);
    p3.setY(4);

    p1.setX(p2);
    p1.setY(p3);

    cout<<"This is the 1st part of X and subpart X = "<<p1.getX().getX()<<endl;
    cout<<"This is the 1st part of X and subpart Y = "<<p1.getX().getY()<<endl;
    cout<<"This is the 1st part of Y and subpart X = "<<p1.getY().getX()<<endl;
    cout<<"This is the 1st part of Y and subpart Y = "<<p1.getY().getY()<<endl;
}