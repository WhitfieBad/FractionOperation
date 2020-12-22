//
// Created by urast on 12/22/2020.
//

#include <cmath>
#include "Subtraction.h"
#include "../utils/FractionUtils.h"

Fraction Subtraction::calculate(Fraction fraction1, Fraction fraction2) {
    leasCommonDenominator(fraction1, fraction2);
    int numerator = fraction1.getNumerator() - fraction2.getNumerator();
    return Fraction(abs(numerator), fraction1.getDenominator(), getType(numerator));
}
