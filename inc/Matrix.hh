#ifndef ZAD3_MATRIX_HH
#define ZAD3_MATRIX_HH

#include "Vector.hh"

#define SIZE 3

class Matrix {

public:
    double values[SIZE][SIZE];

    Matrix(double v1, double v2, double v3, double v4, double v5, double v6, double v7, double v8, double v9);
    Matrix();

    double det() const;

    Vector operator*(Vector& vector);

    double operator()(int i, int j) const;
    double& operator()(int i, int j);

    friend std::istream& operator>>(std::istream& in, Matrix& matrix);
    friend std::ostream& operator<<(std::ostream& out, const Matrix& matrix);
};

#endif //ZAD3_MATRIX_HH
