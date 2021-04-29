#include<iostream>
#include"complex.hpp"
#include<cmath>

using namespace std;


int main(){
    complex x1{3,-2};
    cout << "x1 = " << x1;
    cout << "abs of x1 = " << x1.getAbs() << endl;
    cout << "arg of x1 = = " << x1.getArg() << endl;
    complex y{4,3};
    x1 = y;
    if(x1 == y) cout << "x1 is equal to y\n";
    cout << "arg = " << x1.getArg() << endl;
    complex x2(3,-2);
    complex x3 = x1 - x2;
    complex x4 = x1 * x2;
    complex x5 = {2,3};
    complex x6 = {4, -5};


    cout << "x3 = " << x3;
    cout << "x4 = " << x4;

    cout << conj(x4);

    cout << "x5/x6 = " << x5/x6;

    complex C1{1,3}, C2{2,4}, C3{4,-3}, C4{5,7}, C5{-3,4};

    complex C = C1 + C2 - C3 / C4 * C5 + 9 - 8 * 2 / 3;

    cout << "C = C1 + C2 - C3 / C4 * C5 + 9 - 8 * 2 / 3 = " << C;

    C1 = 5 + C;

    cout << "C1 = " << C1;

    cout << "polar(2,.5) = " << polar(2,.5) << endl;

    return 0;
}