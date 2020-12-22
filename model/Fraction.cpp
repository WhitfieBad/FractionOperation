//
// Created by urast on 12/22/2020.
//

#include <stdexcept>
#include "Fraction.h"


Fraction::Fraction() {}


Fraction::Fraction(int numerator, int denominator, ValueType valueType) {
    setNumerator(numerator);
    setDenominator(denominator);
    setValueType(valueType);
}

Fraction::Fraction(int numerator, int denominator, int mixed, ValueType valueType) {
    setNumerator(numerator);
    setDenominator(denominator);
    setMixed(mixed);
    setValueType(valueType);
}

int Fraction::getNumerator() const {
    if (valueType == NEGATIVE && mixed == 0) {
        return 0 - numerator;
    }

    return numerator;
}

void Fraction::setNumerator(int numerator) {
    if (numerator < 0) {
        throw std::underflow_error("");
    }

    Fraction::numerator = numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}

void Fraction::setDenominator(int denominator) {
    if (denominator < 0) {
        throw std::underflow_error("");
    }

    Fraction::denominator = denominator;
}

int Fraction::getMixed() const {
    return mixed;
}

void Fraction::setMixed(int mixed) {
    if (mixed < 0) {
        throw std::underflow_error("");
    }

    Fraction::mixed = mixed;
}

ValueType Fraction::getValueType() const {
    return valueType;
}

void Fraction::setValueType(ValueType valueType) {
    Fraction::valueType = valueType;
}

Fraction Fraction::clone() {
    return Fraction(Fraction::numerator, Fraction::denominator, Fraction::mixed, Fraction::valueType);
}

bool Fraction::isCorrectFraction() {
    if (denominator == 0 || numerator == 0) {
        throw std::runtime_error("by zero");
    }

    return numerator < denominator;
}

int Fraction::getAbsNumerator() const {
    return numerator;
}




