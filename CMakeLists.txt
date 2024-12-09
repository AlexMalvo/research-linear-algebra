# Минимальная версия CMake
cmake_minimum_required(VERSION 3.10)

# Название проекта
project(LinalgLab)

# Установка стандарта C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Добавление директорий с заголовками
include_directories(include)

# Добавление исходных файлов
add_executable(LinalgLab
        src/SparseMatrix.cpp
        src/MatrixAddition.cpp
        src/MatrixScalarMultiplication.cpp
        src/MatrixMultiplication.cpp
        src/Determinant.cpp
        main.cpp
)

