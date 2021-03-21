#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

//first inline function
inline float power(float n)
{
    return pow(n, 2);
}

//second inline function
inline float power(float n, int p)
{
    return pow(n, p);
}

inline void display(float data)
{
    cout << " Result is " << data << endl;
}

int main()
{
    int ch;

    cout << "1.For any float number raised to any integer power" << endl;
    cout << "2.For squaring any float number" << endl;
    cout << "Enter choice" << endl;
    cin >> ch;

    if (ch == 2)
    {
        float val, r;
        cout << "\n Enter a value  :";
        cin >> val;
        //first inline function is called
        r = power(val);

        display(r);
    }

    else if (ch == 1)
    {
        int p;
        float val, r;
        cout << "\n Enter a value  :";
        cin >> val;
        cout << "\n Enter its power ( integer):";
        cin >> p;
        //second inline function is called
        r = power(val, p);

        display(r);
    }

    else
    {
        cout << "Wrong choice";
    }

    getch();
    return 0;
}