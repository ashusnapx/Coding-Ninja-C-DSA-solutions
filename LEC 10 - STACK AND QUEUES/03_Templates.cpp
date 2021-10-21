#include <iostream>
using namespace std;
template <typename T>
class Pair
{
    T x;
    T y;

    public:
    void setX(T x)
    {
        this ->x = x;
    }

    T getX(){
        return x;
    }
    void setY(T y)
    {
        this ->y = y;
    }

    T getY(){
        return y;
    }
};

int main()
{
    Pair<int> p1;
    p1.setX(10);
    p1.setY(20);
    cout<<p1.getX()<<" "<<p1.getY()<<endl;
    Pair<double> p2;
}
/*
Registration for 2021 SnackDown has been started and last date for registration is 19th october,So without any sort of delay register today,as it is the biggest coding competition event,make sure to be a part of this event. 
Competition registration link : https://rb.gy/w1gdbh
Competition registration fee : 0rs(free)
Competition registration deadline : 19th october,2021
For schedule please visit : https://snackdown.codechef.com/schedule
Thanks and do register positively.

2021 स्नैकडाउन के लिए पंजीकरण शुरू कर दिया गया है और पंजीकरण की अंतिम तिथि 19 अक्टूबर है, इसलिए बिना किसी देरी के आज ही पंजीकरण करें, क्योंकि यह सबसे बड़ी कोडिंग प्रतियोगिता है, इस आयोजन का हिस्सा बनना सुनिश्चित करें।
प्रतियोगिता पंजीकरण लिंक: https://rb.gy/w1gdbh
प्रतियोगिता पंजीकरण शुल्क : 0 रुपये (मुफ्त)
प्रतियोगिता पंजीकरण की समय सीमा: 19 अक्टूबर, 2021
कार्यक्रम के लिए कृपया देखें: https://snackdown.codechef.com/schedule
धन्यवाद और सकारात्मक पंजीकरण करें।
*/