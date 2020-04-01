#ifndef ZAD3_VECTOR_HH
#define ZAD3_VECTOR_HH

#include <iostream>
#include "size.hh"

class Vector {

public:
    Vector(double x, double y, double z);
    Vector();

    double dot(const Vector& vector) const;
    double length() const;

    Vector operator+(const Vector& vector) const;
    Vector operator-(const Vector& vector) const;

    Vector operator*(double v) const;
    Vector operator/(double v) const;

    double operator()(int i) const;
    double& operator()(int i);

    friend std::istream& operator>>(std::istream& in, Vector& vector);
    friend std::ostream& operator<<(std::ostream& out, const Vector& vector);

private:
    double values[SIZE];
};

#endif //ZAD3_VECTOR_HH
