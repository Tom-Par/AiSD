<<<<<<< HEAD
#include <iostream>
#include <vector>

using namespace std;

int counter = 0;
double oblicz(vector<double> a, double x) {
    double result = 0.0;
    int power = a.size()-1;
    for(int i = power; i > 0; i--) {
        result =a[i] + result*x;
        counter++;
    }
    return result;
}

int main() {
    cout << oblicz({4,5,3,0,0,18}, 10) << endl;
    cout << counter << " mnozen"<<endl;
    return 0;
=======
#include <iostream>
#include <vector>

using namespace std;

int counter = 0;
double oblicz(vector<double> a, double x) {
    double result = 0.0;
    int power = a.size()-1;
    for(int i = power; i > 0; i--) {
        result =a[i] + result*x;
        counter++;
    }
    return result;
}

int main() {
    cout << oblicz({4,5,3,0,0,18}, 10) << endl;
    cout << counter << " mnozen"<<endl;
    return 0;
>>>>>>> b7425f24683667e0add42a629675d377adcccfcd
}