#include "SparseMatrix.h"
#include <cmath>

SparseMatrix::SparseMatrix(int r, int c) : rows(r), cols(c) {}

void SparseMatrix::addValue(int row, int col, double value) {
    if (row >= 1 && row <= rows && col >= 1 && col <= cols && fabs(value) > 1e-9) {
        data[row][col] = value;
    }
}

double SparseMatrix::getValue(int row, int col) const {
    if (data.count(row) && data.at(row).count(col)) {
        return data.at(row).at(col);
    }
    return 0.0;
}

double SparseMatrix::trace() const {
    double tr = 0;
    for (int i = 1; i <= min(rows, cols); ++i) {
        tr += getValue(i, i);
    }
    return tr;
}

void SparseMatrix::print() const {
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= cols; ++j) {
            cout << getValue(i, j) << " ";
        }
        cout << endl;
    }
}
