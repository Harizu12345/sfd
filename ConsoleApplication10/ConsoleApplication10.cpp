#include <iostream>
#include <cmath>
using namespace std;


//1

/*
template<typename T, size_t N>
T findAverage(const T(&arr)[N]) {
    T sum = 0;
    for (const auto& element : arr) {
        sum += element;
    }
    return sum / static_cast<T>(N);
}

int main() {
    int intArr[] = { 7, 4, 13, 8, 3 };
    cout << "average int: " << findAverage(intArr) << endl;

    double doubleArr[] = { 1.5, 2.5, 3.5, 4.5, 5.5 };
    cout << "average double: " << findAverage(doubleArr) << endl;

    return 0;
}
*/


//3

double roundWithPrecision(double num, int precision) {
    double multiplier = pow(10.0, precision);
    return round(num * multiplier) / multiplier;
}

int main() {
    double value = 3.14;
    int precision = 5;
    cout << "vakue: " << roundWithPrecision(value, precision) << endl;
    return 0;
}