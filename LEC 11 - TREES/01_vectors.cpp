/*
    !PLEASE REMEMBER THAT THE SQUARE BRACKETS IE. [ ] WILL BE ONLY USED TO GET AND UPDATE AND ONE OF THE ALTERNATIVE FOR THAT IS AT FUNCTION IE. v.at(2),etc.
    */

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // dynamically created
    vector<int> *vp = new vector<int>();

    // statically created
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v[1] = 100;
    // v[3] = 120;
    // v[4] = 130;

    v.push_back(23);
    v.push_back(234);
    v.push_back(2345);

    cout << v[0] << " " << v[1] << " " << v[2] << endl;
    cout<< v.at(0)<<" "<<v.at(1) << " " << v.at(2)<< " " << v.at(3)<< " " << v.at(4) << " " << v.at(5)<< endl;

    cout<<"Size : " << v.size() << endl;
}