#include <iostream>
using namespace std;
template <typename T, typename U>
class Pair
{
    T x;
    U y;

public:
    // setting and getting x
    void setX(T x) { this->x = x; }
    T getX() { return x; }

    // setting and getting y
    void setY(U y) { this->y = y; }
    U getY() { return y; }
};
int main()
{
    /*
    Triplet<Triplet<int,int>,int> t1;
    in this also the similar box is made where we have to portions , one for x and the other for
    y , now the other part where we have to put x is ok but the part for x requires a pair type
    data structure , so now two boxes are more made in the initial x box ie. x and y are created
    */

    Pair <Pair<int,int>,int> p1;
    Pair <int,int> p2;
    p2.setX(1);
    p2.setY(2);
    p1.setX(p2);
    p1.setY(3);

    cout<<p1.getX().getX()<<endl;
    cout<<p1.getX().getY()<<endl;
    cout<<p1.getY()<<endl;



}