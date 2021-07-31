#ifndef __OPERATION_HPP__
#define __OPERATION_HPP__

void OperationChoice();

// Factorial
void FactorialOperation(); // operation
int Factorial(int Number); // function

// It finds the sum of integers up to a given number with a recursive function.
void SumOperation();
int SumRecursive(int Num);

// Fibonacci
void FibonacciOperation();
int Fibonacci(int Num);

// Find least common multiple
void LCMOperation();
int LCM(int Num1, int Num2);

// Find greatest common divisor
void GCDOperation();
int GCD(int Num1, int Num2);

// Prime Number
void PrimeOperation();
bool Prime(int Num);


#endif