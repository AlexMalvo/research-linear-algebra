#include <cmath>
#include "MatrixAddition.h"

SparseMatrix addMatrices(const SparseMatrix& A, const SparseMatrix& B) {
    if (A.rows != B.rows || A.cols != B.cols) {
        throw invalid_argument("Размеры матриц должны совпадать!");
    }

    SparseMatrix result(A.rows, A.cols);
    for (int i = 1; i <= A.rows; ++i) {
        for (int j = 1; j <= A.cols; ++j) {
            double value = A.getValue(i, j) + B.getValue(i, j);
            if (fabs(value) > 1e-9) {
                result.addValue(i, j, value);
            }
        }
    }
    return result;
}
