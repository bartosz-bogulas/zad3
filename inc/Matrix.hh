#ifndef ZAD3_MATRIX_HH
#define ZAD3_MATRIX_HH

#include <iostream>
#include "Vector.hh"
#include "size.hh"

class Matrix {

public:
    Matrix(double v1, double v2, double v3, double v4, double v5, double v6, double v7, double v8, double v9);
    Matrix();

    double det() const;
    Matrix transpose() const;
    Matrix replace_column(const Vector& vector, int y) const;

    Vector operator*(const Vector& vector) const;

    double operator()(int x, int y) const;
    double& operator()(int x, int u);

    friend std::istream& operator>>(std::istream& in, Matrix& matrix);
    friend std::ostream& operator<<(std::ostream& out, const Matrix& matrix);

private:
    double values[SIZE][SIZE];
};

#endif //ZAD3_MATRIX_HH
