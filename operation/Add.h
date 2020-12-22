//
// Created by urast on 12/22/2020.
//

#ifndef FRACTIONCALCULATOR_ADD_H
#define FRACTIONCALCULATOR_ADD_H


#include "Operation.h"



class Add : public Operation {
    Fraction calculate(Fraction fraction1, Fraction fraction2) override;
};


#endif //FRACTIONCALCULATOR_ADD_H
