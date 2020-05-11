#ifndef ZAD3_VECTOR_HH
#define ZAD3_VECTOR_HH

#include <iostream>
#include "size.hh"

/**
 * Klasa przedstawiajaca wektor
 */
class Vector {

public:
    /**
     * Tworzy wektor z podanych skalarow
     * @param x
     * @param y
     * @param z
     */
    Vector(double x, double y, double z);

    /**
     * Tworzy wektor zerowy
     */
    Vector();

    /**
     * Wylicza iloczyn skalarny
     * @param vector
     * @return wartosc
     */
    double dot(const Vector& vector) const;

    /**
     * Wylicza dlugosc wektora
     * @return wartosc
     */
    double length() const;

    /**
     * Operator dodawania wektorow
     * @param vector
     * @return wektor
     */
    Vector operator+(const Vector& vector) const;

    /**
     * Operator odejmowania wektorow
     * @param vector
     * @return wektor
     */
    Vector operator-(const Vector& vector) const;

    /**
     * Operator mnozenia wektora przez skalar
     * @param v
     * @return wektor
     */
    Vector operator*(double v) const;

    /**
     * Operator dzielenia wektora przez skalar
     * @param v
     * @return wektor
     */
    Vector operator/(double v) const;

    /**
     * Operator indeksowania wektora
     * @param i
     * @return skalar na i-tej pozycji w wektorze
     */
    double operator()(int i) const;

    /**
     * Operator indeksowania wektora
     * @param i
     * @return referencje na skalar na i-tej pozycji w wektorze
     */
    double& operator()(int i);

    /**
     * Przeladowany operator wejscia
     * @param in
     * @param vector
     */
    friend std::istream& operator>>(std::istream& in, Vector& vector);

    /**
     * Przeladowany operator wyjscia
     * @param out
     * @param vector
     */
    friend std::ostream& operator<<(std::ostream& out, const Vector& vector);

private:
    double values[SIZE];
};

#endif //ZAD3_VECTOR_HH
