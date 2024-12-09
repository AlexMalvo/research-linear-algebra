#include <iostream>
#include "SparseMatrix.h"
#include "MatrixAddition.h"
#include "MatrixScalarMultiplication.h"
#include "MatrixMultiplication.h"
#include "Determinant.h"

using namespace std;

int main() {
    SparseMatrix A(3, 3), B(3, 3);
    A.addValue(1, 1, 1.0); A.addValue(2, 2, 2.0); A.addValue(3, 3, 3.0);
    B.addValue(1, 1, 4.0); B.addValue(2, 2, 5.0); B.addValue(3, 3, 6.0);

    SparseMatrix C = addMatrices(A, B);
    C.print();

    vector<vector<double>> mat = {{2, -1, 0}, {1, 6, -1}, {1, 3, 5}};
    cout << "Определитель: " << determinant(mat, 3) << endl;
    cout << (isInvertible(mat, 3) ? "Обратима" : "Не обратима") << endl;

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.