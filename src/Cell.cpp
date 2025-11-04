#include "../include/Cell.h"

Cell::Cell() : value(0), isFixed(false) {}

Cell::Cell(int val, bool fixed) : value(val), isFixed(fixed) {}

int Cell::getValue() const {
    return value;
}

void Cell::setValue(int val) {
    if (!isFixed) {
        value = val;
    }
}

bool Cell::getIsFixed() const {
    return isFixed;
}

void Cell::setIsFixed(bool fixed) {
    isFixed = fixed;
}
