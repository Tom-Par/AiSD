#include <iostream>
#include <math.h>

using namespace std;

int pow_recursive(int x, int n) {
    if (n==0)
        return 1;
    if (n%2==0)
        return pow_recursive(x*x, n/2);
    else    
        return x * pow_recursive(x * x, (n-1)/2);
}

int pow(float x, int n) {
    int result = 1;

    while(n > 0) {
        if(n%2 ==1) {
            result *= x;
        }
        result *= result;
        n /= 2;
    }
    return result;
}

int main() {
    cout <<"Rekurencja: "<< pow_recursive(2, 19) << endl;
    cout <<"Brak rekurencji: "<< pow(2, 19) << endl;

}
