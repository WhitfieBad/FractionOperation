//
// Created by urast on 12/22/2020.
//

#include <iostream>
#include "Calculator.h"
#include "../utils/FractionUtils.h"

Calculator::Calculator(Operation *operation) : operation(operation) {}

Calculator::~Calculator()  {
    delete operation;
}

Fraction Calculator::calculate(Fraction fraction1, Fraction fraction2) {


    Fraction o1 = fraction1.clone();
    Fraction o2 = fraction2.clone();

    toOrdinaryFraction(o1);
    toOrdinaryFraction(o2);

    Fraction result = operation->calculate(o1, o2);

    if (result.getNumerator() == 0) {
        return result;
    }

    reduceFraction(result);
    toMixed(result);

    return result;
}


