#include <iostream>


double f(double x){
    return 3*x-1;
}

void bisect(double f0, double f1, double eps){
    if (f(f0) * f(f1) > 0 ){
        std::cout << "Funkcja nie ma pierwiastkow w tym przedziale\n";
        return;
    }
    
    double mid = f0;

    while ((f1-f0) >= eps)
    {
        mid = (f0+f1)/2;
        if (f(mid)==0.0){
            break;
        }
        else if(f(mid) * f(f0) < 0){
            f1 = mid;
        }else{
            f0 = mid;
        }
    }

    std::cout << "Pierwiastka funkcji jest rowna: " << mid <<"\n";
}

int main()
{
    double f0 = 0;
    double f1 = 0;
    double eps = 1e-04;
    bisect(f0, f1,eps);
}