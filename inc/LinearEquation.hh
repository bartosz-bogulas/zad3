#ifndef ZAD3_LINEAREQUATION_HH
#define ZAD3_LINEAREQUATION_HH

#include "Vector.hh"
#include "Matrix.hh"
#include "size.hh"

/**
 * Klasa przedstawaiajaca wynik rownania liniowego
 */
class LinearEquation {
public:
    const Vector solution; /** Wektor rozwiazan */
    const Vector error_vector; /** Wektor bledu */
    const double error; /** Wartosc bledu */

    /**
     * Rozwiazuje rownanie liniowe
     * @param matrix
     * @param vector
     * @return rozwiazanie
     */
    static LinearEquation solve(const Matrix& matrix, const Vector& vector);
private:
    /**
     * Tworzy wynik rownania liniowego
     * @param solution
     * @param error_vector
     * @param error
     */
    LinearEquation(const Vector& solution, const Vector& error_vector, double error);
};

#endif //ZAD3_LINEAREQUATION_HH
