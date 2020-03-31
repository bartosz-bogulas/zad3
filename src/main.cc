#include <sstream>
#include "../inc/Vector.hh"
#include "../inc/Matrix.hh"

int main(int argc, char** argv) {
    Vector v(2, 3, 4);
    v(1) = 5;
    std::cout << v << std::endl;

    Vector x(5, 6, 7);
    std::cout << Vector::dot(v, x) << std::endl;

    std::cout << x + v << std::endl;

    Vector y;
    std::istringstream iss("2.4 5.6 2.3");
    iss >> y;
    std::cout << y << std::endl;

    Matrix x1(1, 2, 3, 4, 5, 6, 7, 8, 9);
    x1(0, 2) = 13;
    std::cout << x1 << std::endl;

    std::cout << x1.det() << std::endl;

    Vector x2(1, 1, 1);
    std::cout << x1 * x2 << std::endl;

    Matrix x3;
    std::istringstream iss1("1 1 1\n1 1 1\n1 1 1");
    iss1 >> x3;
    std::cout << x3 << std::endl;

    std::stringstream ss;
    ss << x3;

    Matrix x4;
    ss >> x4;
    std::cout << x4 << std::endl;\

    Matrix x5(6, 1, 1, 4, -2, 5, 2, 8, 7);
    std::cout << x5.det() << std::endl;
}