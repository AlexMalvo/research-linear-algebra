#include "MatrixScalarMultiplication.h"

SparseMatrix multiplyMatrixScalar(const SparseMatrix& A, double scalar) {
    SparseMatrix result(A.rows, A.cols);
    for (const auto& row : A.data) {
        for (const auto& element : row.second) {
            result.addValue(row.first, element.first, element.second * scalar);
        }
    }
    return result;
}
