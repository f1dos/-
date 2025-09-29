#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double S;
    double A;
    double V;
    std::cin >> S;
    std::cin >> A;
    std::cin >> V;
    double t1;
    double t2;
    t1 = (((-V) + (pow((pow(V,2)+2*A*S),0.5)))/A);
    t2 = (((-V) - (pow((pow(V,2)+2*A*S),0.5)))/A);
    if (t1 > t2) {
        std::cout << t1 << endl;
    } else {
        std::cout << t2 << endl;
    }
    return 0;

}
