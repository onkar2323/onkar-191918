#include <iostream>
#include <math.h>

using namespace std;

double m, totalValue;
int temp;

void inputValue(){
    cout<<"Enter base value : "<<endl;
    cin>>m;
    cout<<"Enter power value (Enter 0 if you want the default value to be taken, square of base value will be the final value) : "<<endl;
    cin>>temp;
}

double powerValue(double m, int n = 2)
{
double value;
value = pow(m,n);
return value;
}

void printValue(){
    cout<<m<<" raised to the power "<<temp<<" becomes : "<<totalValue;
}

int main()
{
    inputValue();
    if(temp == 0){
        totalValue = powerValue(m);
        temp = 2;
    }else {
        totalValue = powerValue(m, temp);
    }
    printValue();
}