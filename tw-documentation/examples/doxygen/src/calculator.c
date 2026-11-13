/**
 * @file calculator.c
 * @brief Implementation of the calculator library.
 */
#include "calculator.h"

int add(int a, int b) { return a + b; }

int divide(int a, int b) { return (b == 0) ? 0 : a / b; }
