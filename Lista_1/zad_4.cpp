#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
    return x * x;
}

double bisection(double a, double b, double eps){
    if (f(a) * f(b) > 0) {
        cout << "Brak pierwiastków w tym przeziale";
        return 0;
    }

    double mid = a;

    while((b-a) >= eps) {
        mid = (a+b)/2;
        if (f(mid)==0.0) {
            break;
        }
        else if (f(mid) * f(a) < 0) {
            b = mid;
        }
        else {
            a = mid;
        }
    }
    cout << "Pierwiastek to "<<mid<<endl;
}

int main() {
    double a = -12;
    double b = 1;
    double eps = 1e-10;

    bisection(a,b,eps);
}