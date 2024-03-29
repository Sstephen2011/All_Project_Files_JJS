
#include <iostream>
using namespace std;

/*A program to do the basics arithmetic operations for given 2 integers using functions*/
/*Declaration of the functions used*/

float Addition (float addend1, float addend2)  {
return addend1 + addend2;
}

float Multiplication (float multiplicand, float multiplier)  {
return multiplicand * multiplier;
}

float Division (float dividend, float divisor)  {
return dividend/divisor;
}

float Subtraction (float sub1, float sub2)  {
return sub1 - sub2;
}

int Modulus (int mod1, int mod2)  {
return mod1 % mod2;
}

int Power (int pow1, int pow2)  {
return pow1 ^ pow2;
}



int main ()  {

/*Calling the functions and displaying the outputs*/

float a, b, sum, product, quotient, difference;
int modulus, power;

cout << "Enter two integers for additon, multiplication, division, subtraction, remainder, power\n";
cin >> a >> b;
sum = Addition(a, b);
cout << "\n The sum is " << sum << ".";

product = Multiplication(a, b);
cout << "\n The product is " << product << ".";

quotient = Division(a, b);
cout << "\n The quotient is " << quotient << ".";

difference = Subtraction(a, b);
cout << "\n The difference is " << difference << ".";

modulus = Modulus(a, b);
cout << "\n The remainder is " << modulus << ".";

power = Power(a, b);
cout << "\n The power is " << power << ".";

return 0;
}
