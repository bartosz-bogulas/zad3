#include "../inc/Matrix.hh"

Matrix::Matrix(double v1, double v2, double v3, double v4, double v5, double v6, double v7, double v8, double v9) {
    values[0][0] = v1;
    values[0][1] = v2;
    values[0][2] = v3;

    values[1][0] = v4;
    values[1][1] = v5;
    values[1][2] = v6;

    values[2][0] = v7;
    values[2][1] = v8;
    values[2][2] = v9;
}

Matrix::Matrix() = default;

double Matrix::det() const {
    return (*this)(0, 0) * ((*this)(1, 1) * (*this)(2, 2) - (*this)(1, 2) * (*this)(2, 1)) -
           (*this)(0, 1) * ((*this)(1, 0) * (*this)(2, 2) - (*this)(1, 2) * (*this)(2, 0)) +
           (*this)(0, 2) * ((*this)(1, 0) * (*this)(2, 1) - (*this)(1, 1) * (*this)(2, 0));
}

Matrix Matrix::transpose() const {
    Matrix result;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result(j, i) = (*this)(i, j);
        }
    }

    return result;
}

Matrix Matrix::replace_column(const Vector &vector, const int y) const {
    Matrix result;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (j != y) {
                result(i, j) = (*this)(i, j);
            } else {
                result(i, j) = vector(i);
            }
        }
    }

    return result;
}

Vector Matrix::operator*(const Vector &vector) const {
    Vector result(0, 0, 0);

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result(i) += (*this)(i, j) * vector(i);
        }
    }

    return result;
}

double Matrix::operator()(const int x, const int y) const {
    return values[x][y];
}

double& Matrix::operator()(const int x, const int y) {
    return values[x][y];
}

std::istream& operator>>(std::istream& in, Matrix& matrix) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            in >> matrix(i, j);
        }
    }

    return in;
}

std::ostream& operator<<(std::ostream& out, const Matrix& matrix) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            out << matrix(i, j);
            if (j < SIZE - 1)
                out << " ";
        }
        if (i < SIZE - 1)
            out << "\n";
    }

    return out;
}
