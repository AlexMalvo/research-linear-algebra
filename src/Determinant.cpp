#include "Determinant.h"
#include <cmath>

double determinant(vector<vector<double>> matrix, int n) {
    double det = 1.0;
    for (int i = 0; i < n; ++i) {
        if (fabs(matrix[i][i]) < 1e-9) {
            bool swapped = false;
            for (int j = i + 1; j < n; ++j) {
                if (fabs(matrix[j][i]) > 1e-9) {
                    swap(matrix[i], matrix[j]);
                    det *= -1;
                    swapped = true;
                    break;
                }
            }
            if (!swapped) return 0.0;
        }

        det *= matrix[i][i];
        for (int j = i + 1; j < n; ++j) {
            double ratio = matrix[j][i] / matrix[i][i];
            for (int k = i; k < n; ++k) {
                matrix[j][k] -= ratio * matrix[i][k];
            }
        }
    }
    return det;
}

bool isInvertible(const vector<vector<double>>& matrix, int n) {
    return fabs(determinant(matrix, n)) > 1e-9;
}
