/*
 * FILE: input_and_functions.c
PROJECT: SENG1005 FOCUSED ASSIGNMENT 2
PROGRAMMER: Ael Sears (9001092)
FIRST VERSION: February 4th, 2025
DESCRIPTION: Using a premade function, write a program that utilizes variables, operators,
and control structures to manipulate data and control program flow.
 *
*/
#include <stdio.h>
/*Function protoypes*/
double getNum(double number); //Prototype for user input function
double addNum(double numOne, double numTwo);

int main(void)
{
    //Declare variables for user input
    double numOne;
    double numTwo;

    printf("Please input a number:\n");
    getNum(numOne); //calls getNum and stores value in variable numOne

    printf("Please input another number\n");
    getNum(numTwo); //calls getNum for numTwo

//Call arithmetic functions and output their values
/* Adding numOne and numTwo */
    double sum = addNum(numOne, numTwo);

    return 0;
}

/*
FUNCTION: addNum()
DESCRIPTION:
Adds two numbers and outputs its sum
PARAMETERS:
double numOne: variable for the first inputed number
double numTwo: variable for second number
double sum: result of numOne + numTwo
double sum (decimal precision to the nearest hundredth)
*/
double addNum(double numOne, double numTwo)
{
    double sum;
    sum = numOne + numTwo;

    return sum; //returns value of sum
}

/*
FUNCTION: getNum()
DESCRIPTION:
Allows data inputed from user input
PARAMETERS:
char record: array buffer to store user input
double number: variable that stores value from string->double
RETURNS:
double number (outputs -1 if conversion fails)
*/
#pragma warning(disable: 4996)
double getNum(void)
{
    char record[121] = { 0 }; // Buffer to store input string
    double number = 0.0; // Variable to store the converted number
    // Prompt the user for input and read the input string
    fgets(record, 121, stdin);
    // Attempt to convert the string to a double
    if (sscanf(record, "%lf", &number) != 1) {
        // If conversion fails, set the number to -1
        number = -1.0;
    }
    return number; // Return the double (or -1 if conversion failed)
}
