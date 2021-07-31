#include <iostream>
#include "Operation.hpp"

using namespace std;

// Ask to operation choose
void OperationChoice()
{
	int Choice;
	
	cout << "			" << "**** Welcome to the Recursive Function ****" << endl;
	cout << "Choose one operation: " << endl
	<< " " << "(1) Factorial" << endl
	<< " " << "(2) It finds the sum of integers up to a given number" << endl
	<< " " << "(3) Find Fibonacci Number" << endl
	<< " " << "(4) Find least common multiple" << endl
	<< " " << "(5) Find greatest common divisor" << endl
	<< " " << "(6) Check is it prime number" << endl;
	cin >> Choice;
	
	switch (Choice)
	{
	case 1:
		FactorialOperation();
		break;
	case 2:
		SumOperation();
		break;
	case 3:
		FibonacciOperation();
		break;
	case 4:
		LCMOperation();
		break;
	case 5:
		GCDOperation();
		break;
	case 6:
		PrimeOperation();
		break;
	default: cout << " " << "Write a correct number..." << endl;
	}
}


/////////////////// Create Operations ///////////////////

// Ask to number
void PrimeOperation()
{
	int Num;

	cout << " " << "Write a number: " << endl;
	cin >> Num;
	
	if (Prime(Num) == 1)
	{
		cout << " " << Num << " is prime number!!" << endl;
	}
	else
	{
		cout << " " << Num << " is not prime number!!" << endl;
	}
}

// Ask to number
void GCDOperation()
{
	int Num1, Num2;

	cout << " " << "Write a first number: " << endl;
	cin >> Num1;

	cout << " " << "Write a second number: " << endl;
	cin >> Num2;


	cout << " " << "Result: " << GCD(Num1, Num2) << endl;
}

// Ask to number
void LCMOperation()
{
	int Num1, Num2;

	cout << " " << "Write a first number: " << endl;
	cin >> Num1;
	
	cout << " " << "Write a second number: " << endl;
	cin >> Num2;


	cout << " " << "Result: " << LCM(Num1,Num2) << endl;
}

// Ask to number
void FibonacciOperation()
{
	int Num;

	cout << " " << "Write a number: " << endl;
	cin >> Num;

	cout << " " << "Result: " << Fibonacci(Num) << endl;
}

// Ask to number
void SumOperation()
{
	int Num;
	
	cout << " " << "Write a number: " << endl;
	cin >> Num;

	cout << " " << "Result: " << SumRecursive(Num) << endl;
}

// Ask to number
void FactorialOperation()
{
	int Num;

	cout << " " << "Write a number: " << endl;
	cin >> Num;

	cout << " " << "Factorial: " << Factorial(Num) << endl;
}


/////////////////// Calculate Time ///////////////////

// It finds the sum of integers up to a given number
int SumRecursive(int Num)
{
	if (Num > 0)
	{
		return Num + SumRecursive(Num - 1);
	}

	return 0;
}

// Calculate Factorial
int Factorial(int Number)
{
	if (Number <= 0)
	{
		cout << "Something went wrong" << endl;
	}
	else if (Number == 1)
	{
		return Number;
	}
	else
	{
		return Number * Factorial(Number - 1);
	}

	return 0;
}

// Find Fibonacci number
int Fibonacci(int Num)
{
	if (Num == 0 || Num == 1)
	{
		return Num;
	}else
	{
		return Fibonacci(Num - 1) + Fibonacci(Num - 2);
	}
}

// Find least common multiple
int LCM(int Num1, int Num2)
{
	static int Increase = 1;

	if (Increase % Num1 == 0 && Increase % Num2 == 0)
	{
		return Increase;
	}
	else
	{
		Increase++;
		LCM(Num1, Num2);
	}
	return Increase;
}

// Find greatest common divisor
int GCD(int Num1, int Num2)
{
	if (Num2 != 0)
		return GCD(Num2, Num1 % Num2);
	else
		return Num1;
}

// Check is it prime number
bool Prime(int Num)
{
	static int PrimeCheck = 2;
	bool IsPrime = true;

	if (Num == 1 || Num == 0)
	{
		return false;
	}
	else
	{
		if (Num % PrimeCheck == 0)
		{
			IsPrime = false;
		}
		else
		{
			PrimeCheck++;
			Prime(Num);
		}
	}

	return IsPrime;
}
