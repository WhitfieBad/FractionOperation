//
// Created by urast on 12/22/2020.
//

#include "ValueType.h"

ValueType getType(int value) {
    if (value < 0) {
        return NEGATIVE;
    }

    return POSITIVE;
}