#ifndef Matrix3
#define Matrix3

#include <string>
#include "CoefficientException.h"

class Matrix33
{
public:

    // Static Class-Functions
    static Matrix33 zeros();
    static Matrix33 ones();

    // Construction
    Matrix33(double m11, double m12, double m13,
        double m21, double m22, double m23,
        double m31, double m32, double m33);

    double get(int row, int col) const {
        if (row >= 3 || col >= 3 || row < 0 || col < 0) {
            throw CoefficientException("Matrix33", "Zugriff auf Index außerhalb der Grenzen (IndexOutOfBounds)");
        }
        else {
            return m_matrix[row][col];
        }
    }

    std::string toString() const;

    //Operator
    Matrix33 operator+(const Matrix33& rmatrix) const;
    Matrix33 operator*(const Matrix33& rmatrix) const;
    Matrix33 operator*(int rdou) const;
    Matrix33 operator+=(const Matrix33& rmatrix);
    friend Matrix33 operator*(int rdou, const Matrix33& rmatrix);
    operator double() const;




private:
    double m_matrix[3][3];
};

#endif