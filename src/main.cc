#include "../inc/Vector.hh"
#include "../inc/Matrix.hh"
#include "../inc/LinearEquation.hh"

int main(int argc, char** argv) {
    Matrix A;
    Vector b;

    std::cout << "Macierz A^T:" << std::endl;
    std::cin >> A;

    std::cout << "Wektor wyrazow wolnych b:" << std::endl;
    std::cin >> b;

    std::cout << A << std::endl << b << std::endl;

    LinearEquation equation = LinearEquation::solve(A.transpose(), b);

    std::cout << "Rozwiazanie x = {x1, x2, x3}:" << std::endl;
    std::cout << equation.solution << std::endl;

    std::cout << "Wektor bledu: Ax-b " << equation.error_vector << std::endl;
    std::cout << "Dlugosc wektora bledu: ||Ax-b|| " << equation.error << std::endl;
}
