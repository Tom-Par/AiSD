#include <iostream>

using namespace std;

int trees_in_heap(int n) {
    int sum = 0;
    while (n!=0) {
        sum += n%2;
        n/=2;
    }
    return sum;
}

int main() {
    cout << trees_in_heap(15)<<endl;
    return 0;
}