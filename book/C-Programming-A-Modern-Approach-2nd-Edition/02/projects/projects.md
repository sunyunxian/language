
## Project 2.01

Write a program that uses `printf` to display the following picture on the
screen:

```shell
       *
      *
     *
*   *
 * *
  *
```

## Project 2.02

Write a program that computes the volume of a sphere with a 10-meter radius, using the formula v = 4/3πr³. Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What happens?) Hint: C doesn't have an exponentiation operator, so you'll need to multiply r by itself twice to compute r³.

## Project 2.04

Write a program that asks the user to enter a dollars-and-cents amount, then displays the amount with a 5% tax added:

Enter an amount: 100.00
With tax added: $105.00

## Project 2.05

Write a program that asks the user to enter a value for x and then displays the value of the following polynomial:

3x5 + 2x4 - 5x3 - x2 + 7x - 6

Hint: C doesn't have an exponentiation operator, so you'll need to multiply x by itself repeatedly in order to compute the powers of x. (For example, x *x* x is x cubed.)

## Project 2.07

Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5 and $1 bills:

Enter a dollar amount: 93

$20 bills: 4
$10 bills: 1
 $5 bills: 0
 $1 bills: 3
Hint: Divide the amount by 20 to determine the number of $20 bills needed, and then reduce the amount by the totoal value of the $20 bills. Repeat for the other bill sizes. Be sure to use integer values throughout, not floating-point numbers.

## Project 2.08

Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments:

Enter amount of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66

Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71
Display each balance with two digits after the decimal point. Hint: Each month, the balance is decreased by the amount of the payment, but increased by the balance times the monthly interest rate. To find the monthly interest rate, convert the interest rate entered by the user to a percentage and divide it by 12.
