#include<iostream>

using namespace std;

class Base1 {
public:
    int a = 10;
};

class Base2 {
public:
    int b = 5;
};

class Base3 {
public:
    int c = 500;
};

class Derived1 : public Base1, public Base2, public Base3 {
public:
    void show() {
        cout << "variable from Base1, a = " << a << endl;
        cout << "variable from Base2, b = " << b << endl;
        cout << "variable from Base3, c = " << c << endl;
    }
};

int main()
{
    Derived1 obj;
    obj.show();

    return 0;
}
