#include "calculator.hpp"

double Addition(double x, double y) {
    return x + y;
}
double Subtraction(double x, double y) {
    return x - y;
}
double Multiplication(double x, double y) {
    return x * y;
}
double Division(double x, double y) {
    return x / y;
}
double pows(double x, double y) {
    double tavan = std::pow(x, y);
    return tavan;
}