#include <iostream>
using namespace std;

class Float
{
public:
    float a;
    Float(){};
    Float(float x)
    {
        a = x;
    }
    Float operator+(Float o2)
    {
        Float temp;
        temp.a = a + o2.a;
        cout << "+ overloading: " << temp.a << endl;
    }
    Float operator-(Float o2)
    {
        Float temp;
        temp.a = a - o2.a;
        cout << "- overloading: " << temp.a << endl;
    }
    Float operator*(Float o2)
    {
        Float temp;
        temp.a = a * o2.a;
        cout << "* overloading: " << temp.a << endl;
    }
    Float operator/(Float o2)
    {
        Float temp;
        temp.a = a / o2.a;
        cout << "/ overloading: " << temp.a << endl;
    }
};

int main()
{
    Float o1(2), o2(3), o3;
    o3 = o1 + o2;
    o3 = o1 - o2;
    o3 = o1 * o2;
    o3 = o1 / o2;
    return 0;
}