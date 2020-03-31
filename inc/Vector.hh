#ifndef ZAD3_VECTOR_HH
#define ZAD3_VECTOR_HH

#include <iostream>

#define SIZE 3

class Vector {

public:
    double values[SIZE];

    Vector(double x, double y, double z);
    Vector();

    static double dot(const Vector& vector1, const Vector& vector2);

    Vector operator+(const Vector& vector) const;
    Vector operator-(const Vector& vector) const;

    Vector operator*(const double v) const;
    Vector operator/(const double v) const;

    double operator()(int i) const;
    double& operator()(int i);

    friend std::istream& operator>>(std::istream& in, Vector& vector);
    friend std::ostream& operator<<(std::ostream& out, const Vector& vector);
};

#endif //ZAD3_VECTOR_HH
