/*Develop a program using a typedef for a complex number structure. The program should take two sets of real and imaginary parts as input and perform the following operations:



Addition of 2 complex numbers
Subtraction of 2 complex numbers
Multiplication of 2 complex numbers
Modulus of a given complex numbers


Display the results of each operation.



Formulas for reference:

Addition of Complex Numbers: (a + bi) + (c + di) = (a + c) + (b + d)i 
Subtraction of Complex Numbers: (a + bi) - (c + di) = (a - c) + (b - d)i 
Multiplication of Complex Numbers: (a + bi) * (c + di) = (ac - bd) + (ad + bc)i
Modulus (Magnitude) of a Complex Number (a + bi) = √a2 + b2
Input format :
The first line consists of two space-separated float values representing the real and imaginary parts of the first complex number.

The second line consists of two space-separated float values representing the real and imaginary parts of the second complex number.

Output format :
The first line prints the addition of the two complex numbers in the format: a + bi

The second line prints the subtraction of the two complex numbers in the format: a + bi

The third line prints the multiplication of the two complex numbers in the format: a + bi

The fourth line prints a float value representing the modulus of the first complex number.

The fifth line prints a float value representing the modulus of the second complex number.*/


#include <stdio.h>
#include <math.h>

typedef struct complex {
    float real;
    float imag;
} complex;

int main() {
    complex n1, n2;
    scanf("%f %f", &n1.real, &n1.imag);
    scanf("%f %f", &n2.real, &n2.imag);

    // Addition
    complex resultadd;
    resultadd.real = n1.real + n2.real;
    resultadd.imag = n1.imag + n2.imag;

    // Subtraction
    complex resultsubtract;
    resultsubtract.real = n1.real - n2.real;
    resultsubtract.imag = n1.imag - n2.imag;

    // Multiplication
    complex resultmul;
    resultmul.real = n1.real * n2.real - n1.imag * n2.imag;
    resultmul.imag = n1.real * n2.imag + n2.real * n1.imag;

    // Modulus
    float c1, c2;
    c1 = sqrt((n1.real * n1.real) + (n1.imag * n1.imag));
    c2 = sqrt((n2.real * n2.real) + (n2.imag * n2.imag));

    printf("%.2f + %.2fi\n", resultadd.real, resultadd.imag);
    printf("%.2f + %.2fi\n", resultsubtract.real, resultsubtract.imag);
    printf("%.2f + %.2fi\n", resultmul.real, resultmul.imag);
    printf("%.2f\n%.2f", c1, c2);

    return 0;
}
