#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;
    double sum, sub, mul, div;
    double sqrx, sqry, cbx, cby;
    cout << "           WELCOME TO ARCH-CALC    " << endl;
    cout << "               VERSION- 0.1        " << endl;
    cout << "           A SIMPLE CALCULATOR    " << endl;
    cout << "           MADE BY LASTSCERET987   " << endl;
    cout << "   GITHUB- https://github.com/LASTSECRET987   " << endl;
    cout << " " << endl;
    cout << "Enter 1st Number:- " << endl;
    cin >> x;
    cout << "Enter 2nd Number:- " << endl;
    cin >> y;
    cout << " " << endl;
    sum = x + y;
    sub = x - y;
    mul = x * y;
    div = x / y;
    sqrx = x * x;
    sqry = y * y;
    cbx = x * x * x;
    cby = y * y * y;
    cout << "Sum:- " << sum << endl;
    cout << "Difference:- " << sub << endl;
    cout << "Product:- " << mul << endl;
    cout << "Quotient:- " << div << endl;
    cout << "Square of x:- " << sqrx << endl;
    cout << "Square of y:- " << sqry << endl;
    cout << "Cube of x:- " << cbx << endl;
    cout << "Cube of y:- " << cby << endl;
    cout << "Square root of x:- " << sqrt(x) << endl;
    cout << "Square root of y:- " << sqrt(y) << endl;
    cout << "Cube root of x:- " << cbrt(x) << endl;
    cout << "Cube root of y:- " << cbrt(y) << endl;
    cout << " " << endl;
    cout << "Matrix:- https://matrix.to/#/!YLzMRKKygGfUtQZgQy:matrix.org?via=matrix.org" << endl;
	return 0;
}
