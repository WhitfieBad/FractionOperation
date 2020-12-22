//
// Created by urast on 12/22/2020.
//

#ifndef FRACTIONCALCULATOR_FRACTIONUTILS_H
#define FRACTIONCALCULATOR_FRACTIONUTILS_H

#endif //FRACTIONCALCULATOR_FRACTIONUTILS_H

#include "../model/Fraction.h"
#include "stdexcept"
#include "exception"

long gcd(long a, long b);
long lcm(long a, long b);
void leasCommonDenominator(Fraction& fraction1, Fraction& fraction2);
void toOrdinaryFraction(Fraction& fraction);
void reduceFraction(Fraction& fraction);
void toMixed(Fraction& fraction);

