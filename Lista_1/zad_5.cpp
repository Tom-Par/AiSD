#include <iostream>
#include <vector>

using namespace std;

double oblicz(vector<double> a, double x) {
    double result = 0.0;
    int power = a.size()-1;
    for(int i = power; i >= 0; i--) {
        result =a[i] + result*x;
    }
    return result;
};

int main() {
    cout << oblicz({4,5,3,0,0,18}, 10) << endl;
    return 0;
}