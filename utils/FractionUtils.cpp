//
// Created by urast on 12/22/2020.
//

#include "FractionUtils.h"

long gcd(long a,long b){
    return b == 0 ? a : gcd(b,a % b);
}

long lcm(long a,long b){
    return a / gcd(a,b) * b;
}


void leasCommonDenominator(Fraction& o1, Fraction& o2){

    int lcmValue = lcm(o1.getDenominator(), o2.getDenominator());


    int fractionGcd = lcmValue / o1.getDenominator();
    o1.setNumerator(o1.getAbsNumerator() * fractionGcd);
    o1.setDenominator(o1.getDenominator() * fractionGcd);

    fractionGcd = lcmValue / o2.getDenominator();
    o2.setNumerator(o2.getAbsNumerator() * fractionGcd);
    o2.setDenominator(o2.getDenominator() * fractionGcd);


}

void toOrdinaryFraction(Fraction& fraction) {

    if ((fraction.getNumerator() == 0 && fraction.getDenominator() == 0) && fraction.getMixed() != 0) {
        fraction.setNumerator(fraction.getMixed());
        fraction.setDenominator(1);
        fraction.setMixed(0);
    } else if (fraction.getMixed() != 0 && (fraction.getNumerator() != 0 && fraction.getDenominator() != 0)) {
        fraction.setNumerator((fraction.getMixed() * fraction.getDenominator()) + fraction.getAbsNumerator());
        fraction.setMixed(0);
    } else {
        throw std::invalid_argument("");
    }

}

void reduceFraction(Fraction& fraction) {
    if (fraction.getDenominator() == 0 || fraction.getNumerator() == 0) {
        throw std::invalid_argument("");
    }

    if (fraction.getMixed() != 0) {
        throw std::invalid_argument("");
    }

    int gcdValue = gcd(fraction.getAbsNumerator(), fraction.getDenominator());
    fraction.setNumerator(fraction.getAbsNumerator() / gcdValue);
    fraction.setDenominator(fraction.getDenominator() / gcdValue);
}

void toMixed(Fraction& fraction) {
    if (fraction.isCorrectFraction() || fraction.getMixed() != 0) {
        return;
    }

    if (fraction.getDenominator() == 1) {
        fraction.setMixed(fraction.getAbsNumerator());
        fraction.setNumerator(0);
        fraction.setDenominator(0);
    } else {
        fraction.setMixed(fraction.getAbsNumerator() / fraction.getDenominator());
        fraction.setNumerator(fraction.getAbsNumerator() % fraction.getDenominator());
    }
}
