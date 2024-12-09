#ifndef SPARSE_MATRIX_H
#define SPARSE_MATRIX_H

#include <iostream>
#include <unordered_map>
using namespace std;

class SparseMatrix {

public:
    SparseMatrix(int r, int c);

    void addValue(int row, int col, double value);
    double getValue(int row, int col) const;
    double trace() const;
    void print() const;

    int cols;
    int rows;
    unordered_map<int, unordered_map<int, double>> data;
};

#endif // SPARSE_MATRIX_H
