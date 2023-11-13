#include <iostream>
#include <cassert>
using namespace std;
class Fraction {
private:
    int numerator;
    int denominator;

public:
    // Constructor
    Fraction(int num, int denom) {
        assert(denom != 0);  // Check if denominator is not zero
        assert(typeid(num) == typeid(int) && typeid(denom) == typeid(int));  // Check if both numerator and denominator are of type int
        numerator = num;
        denominator = denom;
        reduce();  // Reduce the fraction to lowest terms
    }

    // Method to reduce the fraction to lowest terms
    void reduce() {
        int gcd = calculateGCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

    // Helper method to calculate the greatest common divisor using Euclidean algorithm
    int calculateGCD(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    // Overriding the + operator
    Fraction operator+(const Fraction& other) const {
        int newNumerator = numerator * other.denominator + other.numerator * denominator;
        int newDenominator = denominator * other.denominator;
        Fraction result(newNumerator, newDenominator);
        return result;
    }

    // Overriding the << operator for easy printing
    friend std::ostream& operator<<(std::ostream& os, const Fraction& frac) {
        os << frac.numerator << "/" << frac.denominator;
        return os;
    }
};

int main() {
    // Example usage
    Fraction frac1(1, 2);
    Fraction frac2(3, 4);

    Fraction result = frac1 + frac2;

    std::cout << "Fraction 1: " << frac1 << std::endl;
    std::cout << "Fraction 2: " << frac2 << std::endl;
    std::cout << "Sum: " << result << std::endl;

    return 0;
}
