#include <iostream>
#include <cmath>

using namespace std;

void multiplyComplex(double c1, double d1, double c2, double d2, double* realPart, double* imaginaryPart, double& phase) {
*realPart = c1 * c2 - d1 * d2;
*imaginaryPart = c1 * d2 + d1 * c2;

double modulus = sqrt(pow(*realPart, 2) + pow(*imaginaryPart, 2));
phase = atan2(*imaginaryPart, *realPart);

cout << "Модуль: " << modulus << endl;
cout << "Фаза: " << phase << endl;
}

int main() {
double c1, d1, c2, d2;
cout << "Введіть дійсну та уявну частини першого комплексного числа (c1 d1): ";
cin >> c1 >> d1;
cout << "Введіть дійсну та уявну частини другого комплексного числа (c2 d2): ";
cin >> c2 >> d2;

double realPart, imaginaryPart, phase;
    multiplyComplex(c1, d1, c2, d2, &realPart, &imaginaryPart, phase);

    return 0;
}