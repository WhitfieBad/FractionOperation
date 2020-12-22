//
// Created by urast on 12/22/2020.
//

#ifndef FRACTIONCALCULATOR_FRACTION_H
#define FRACTIONCALCULATOR_FRACTION_H


#include "ValueType.h"

class Fraction {

public:

    Fraction();

    Fraction(int numerator, int denominator, ValueType valueType);

    Fraction(int numerator, int denominator, int mixed, ValueType valueType);

    int getNumerator() const;

    int getAbsNumerator() const;

    void setNumerator(int numerator);

    int getDenominator() const;

    void setDenominator(int denominator);

    int getMixed() const;

    void setMixed(int mixed);

    ValueType getValueType() const;

    void setValueType(ValueType valueType);

    Fraction clone();

    bool isCorrectFraction();

private:
    int numerator = 0;
    int denominator = 0;
    int mixed = 0;
    ValueType valueType;

};


#endif //FRACTIONCALCULATOR_FRACTION_H
