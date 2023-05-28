#include <cmath>
#include <iostream>
const double pi = 4. * std::atan(1.);
int main() {
int figure;
std::cin >> figure;
if (figure == 1) {
double r;
std::cin >> r;
if (r >= 0.) {
double area = pi * std::pow(r, 2);
std::cout << area << std::endl; }
else {
std::cout << "error" << std::endl; }}
else if (figure == 2) {
double a, b, c;
std::cin >> a >> b >> c;
if (a > 0. && b > 0. && c > 0. && a < b + c && b < c + a && c < a + b) {
double s = (a + b + c) / 2;
double area = std::sqrt(s * (s - a) * (s - b) * (s - c));
std::cout << area << std::endl; }
else {
std::cout << "error" << std::endl; }}
else {
std::cout << "error" << std::endl; }}
