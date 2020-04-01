#ifndef ZAD3_LINEAREQUATION_HH
#define ZAD3_LINEAREQUATION_HH

#include "Vector.hh"
#include "Matrix.hh"
#include "size.hh"

class LinearEquation {
public:
    const Vector solution;
    const Vector error_vector;
    const double error;

    static LinearEquation solve(const Matrix& matrix, const Vector& vector);
private:
    LinearEquation(const Vector& solution, const Vector& error_vector, double error);
};

#endif //ZAD3_LINEAREQUATION_HH
