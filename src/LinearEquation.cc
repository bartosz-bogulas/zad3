#include "../inc/LinearEquation.hh"

LinearEquation::LinearEquation(const Vector& solution, const Vector& error_vector, const double error) :
    solution(solution), error_vector(error_vector), error(error) {}

LinearEquation LinearEquation::solve(const Matrix& matrix, const Vector& vector) {
    const double determinant = matrix.det();

    Vector solution;
    Vector errorVector;
    double error;

    for (int i = 0; i < SIZE; i++) {
        solution(i) = matrix.replace_column(vector, i).det() / determinant;
    }

    errorVector = matrix * solution - vector;
    error = errorVector.length();

    return LinearEquation(solution, errorVector, error);
}
