#include <iostream>

double square(double x) {
    return x*x;
}

double cube(double x) {
    return x * x * x;
}

double integrate(double low_bound, double up_bound, int it, double (*fcnptr)(double)) {
    double sum = 0;
    double step = (up_bound - low_bound) / it;
    for (int i = 0; i < it; i++) {
        low_bound += step;
        sum += fcnptr(low_bound) * step;
    }
    return sum;
}

int main(int argc, char** argv) {
    std::cout << integrate(0, 1, 100000, cube) << std::endl;
}
