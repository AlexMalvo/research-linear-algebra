#include "MatrixMultiplication.h"

SparseMatrix multiplyMatrices(const SparseMatrix& A, const SparseMatrix& B) {
    if (A.cols != B.rows) {
        throw invalid_argument("Несоответствие размеров матриц для умножения!");
    }

    SparseMatrix result(A.rows, B.cols);
    for (const auto& row : A.data) {
        for (const auto& element : row.second) {
            int i = row.first;
            int k = element.first;
            double value = element.second;

            for (int j = 1; j <= B.cols; ++j) {
                result.addValue(i, j, result.getValue(i, j) + value * B.getValue(k, j));
            }
        }
    }
    return result;
}
