//
// Created by urast on 12/22/2020.
//

#ifndef FRACTIONCALCULATOR_SUBTRACTION_H
#define FRACTIONCALCULATOR_SUBTRACTION_H


#include "Operation.h"

class Subtraction : public Operation {
    Fraction calculate(Fraction fraction1, Fraction fraction2) override;
};


#endif //FRACTIONCALCULATOR_SUBTRACTION_H
