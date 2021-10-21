#include <iostream>
using namespace std;
template <typename T,typename U,typename V>
class Triplet{
    T x;
    U y;
    V z;

    public:
    //setting and getting x
    void setX(T x) 
    { 
        this -> x = x;
    }
    T getX()
    {
        return x;
    }

    //setting and getting y
    void setY(U y) 
    { 
        this -> y = y;
    }
    U getY()
    {
        return y;
    }

    //setting and getting z
    void setZ(V z) 
    { 
        this -> z = z;
    }
    V getZ()
    {
        return z;
    }
};
int main()
{
    Triplet<int,int,int> t1;
    t1.setX(10);
    t1.setY(20);
    t1.setZ(30);

    cout<<t1.getX()<<endl;
    cout<<t1.getY()<<endl;
    cout<<t1.getZ()<<endl;
}