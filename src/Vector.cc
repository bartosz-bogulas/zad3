#include "../inc/Vector.hh"

Vector::Vector(double x, double y, double z) {
    values[0] = x;
    values[1] = y;
    values[2] = z;
}

Vector::Vector() = default;

double Vector::dot(const Vector &vector1, const Vector &vector2) {
    double result = 0;

    for (int i = 0; i < SIZE; i++) {
        result += vector1(i) * vector2(i);
    }

    return result;
}

Vector Vector::operator+(const Vector &vector) const {
    Vector result;

    for (int i = 0; i < SIZE; i++) {
        result(i) = (*this)(i) + vector(i);
    }

    return result;
}

Vector Vector::operator-(const Vector &vector) const {
    Vector result;

    for (int i = 0; i < SIZE; i++) {
        result(i) = (*this)(i) - vector(i);
    }

    return result;
}

Vector Vector::operator*(const double v) const {
    Vector result;

    for (int i = 0; i < SIZE; i++) {
        result(i) = (*this)(i) * v;
    }

    return result;
}

Vector Vector::operator/(const double v) const {
    Vector result;

    for (int i = 0; i < SIZE; i++) {
        result(i) = (*this)(i) / v;
    }

    return result;
}

double Vector::operator()(int i ) const {
    return values[i];
}

double& Vector::operator()(int i) {
    return values[i];
}

std::istream& operator>>(std::istream& in, Vector& vector) {
    for (int i = 0; i < SIZE; i++) {
        in >> vector(i);
    }

    return in;
}

std::ostream& operator<<(std::ostream& out, const Vector& vector) {
    for (int i = 0; i < SIZE; i++) {
        out << vector(i);
        if (i < SIZE - 1)
            out << " ";
    }

    return out;
}
