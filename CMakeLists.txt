cmake_minimum_required(VERSION 3.17)
project(FractionCalculator)

set(CMAKE_CXX_STANDARD 20)

add_executable(FractionCalculator main.cpp operation/Operation.h operation/Add.cpp operation/Add.h operation/Subtraction.cpp operation/Subtraction.h operation/Calculator.cpp operation/Calculator.h model/Fraction.cpp model/Fraction.h model/ValueType.h utils/FractionUtils.h utils/FractionUtils.cpp model/ValueType.cpp)