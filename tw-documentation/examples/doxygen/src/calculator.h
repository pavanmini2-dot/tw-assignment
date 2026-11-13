/**
 * @file calculator.h
 * @brief Declarations for a tiny calculator library.
 * @author Pavan A Gowda
 * @version 1.0
 */
#ifndef CALCULATOR_H
#define CALCULATOR_H

/**
 * @brief Adds two integers.
 * @param a First operand.
 * @param b Second operand.
 * @return The sum of @p a and @p b.
 */
int add(int a, int b);

/**
 * @brief Divides one integer by another.
 * @param a Numerator.
 * @param b Denominator; must not be zero.
 * @return The integer quotient, or 0 if @p b is zero.
 * @warning Division by zero returns 0 instead of failing.
 */
int divide(int a, int b);

#endif
