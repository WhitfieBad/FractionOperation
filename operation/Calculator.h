//
// Created by urast on 12/22/2020.
//

#ifndef FRACTIONCALCULATOR_CALCULATOR_H
#define FRACTIONCALCULATOR_CALCULATOR_H

#include "../utils/FractionUtils.h"
#include "Operation.h"

class Calculator {
public:
    Calculator(Operation *operation);

    virtual ~Calculator();

    Fraction calculate(Fraction fraction1, Fraction fraction2);
private:
    Operation *operation;
};


#endif //FRACTIONCALCULATOR_CALCULATOR_H
