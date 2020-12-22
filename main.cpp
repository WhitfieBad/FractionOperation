#include <iostream>
#include "model/Fraction.h"
#include "operation/Calculator.h"
#include "operation/Add.h"
#include "operation/Subtraction.h"

int main() {
    Fraction fraction =  Fraction(1,4,5,NEGATIVE);
    Fraction fraction1 = Fraction(1,4,5,NEGATIVE);


    Calculator *calculator = new Calculator(new Subtraction());
    Fraction result = calculator->calculate(fraction, fraction1);

    std::cout << result.getMixed() << " ( " <<result.getNumerator() << " / " << result.getDenominator() << " ) " << "\n";

    delete calculator;


    return 0;
}
