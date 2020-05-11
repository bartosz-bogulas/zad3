#ifndef ZAD3_MATRIX_HH
#define ZAD3_MATRIX_HH

#include <iostream>
#include "Vector.hh"
#include "size.hh"

/**
 * Klasa przedstawiajaca macierz dwuwymiarowa
 */
class Matrix {

public:

    /**
     * Tworzy macierz z podanych skalarow
     * @param v1
     * @param v2
     * @param v3
     * @param v4
     * @param v5
     * @param v6
     * @param v7
     * @param v8
     * @param v9
     */
    Matrix(double v1, double v2, double v3, double v4, double v5, double v6, double v7, double v8, double v9);

    /**
     * Tworzy macierz zerowa
     */
    Matrix();

    /**
     * Wylicza wyznacznik
     * @return wartosc
     */
    double det() const;

    /**
     * Transpozycjonuje macierz
     * @return macierz transponowana
     */
    Matrix transpose() const;

    /**
     * Podmienia y-ta kolumne
     * @param vector
     * @param y
     * @return macierz z podmieniona kolumna na wektor
     */
    Matrix replace_column(const Vector& vector, int y) const;

    /**
     * Mnozy macierz przez wektor
     * @param vector
     * @return wektor
     */
    Vector operator*(const Vector& vector) const;

    /**
     * Operator indeksowania macierzy
     * @param x
     * @param y
     * @return skalar na (x,y)-tej pozycji w macierzy
     */
    double operator()(int x, int y) const;

    /**
     * Operator indeksowania macierzy
     * @param x
     * @param y
     * @return referencje na skalar na (x,y)-tej pozycji w macierzy
     */
    double& operator()(int x, int u);

    /**
     * Przeladowany operator wejscia
     * @param in
     * @param matrix
     */
    friend std::istream& operator>>(std::istream& in, Matrix& matrix);

    /**
     * Przeladowany operator wyjscia
     * @param in
     * @param matrix
     */
    friend std::ostream& operator<<(std::ostream& out, const Matrix& matrix);

private:
    double values[SIZE][SIZE];
};

#endif //ZAD3_MATRIX_HH
