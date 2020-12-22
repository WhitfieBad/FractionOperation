//
// Created by urast on 12/22/2020.
//

#ifndef FRACTIONCALCULATOR_OPERATION_H
#define FRACTIONCALCULATOR_OPERATION_H


#include "../model/Fraction.h"

class Operation {
    public:
    virtual Fraction calculate(Fraction fraction1, Fraction fraction2) = 0;
};


#endif //FRACTIONCALCULATOR_OPERATION_H
