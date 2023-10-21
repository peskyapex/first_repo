// Osama Al Zahrani 2044104 HW2
#include <math.h>
#include <stdio.h>

int main() {
   int num, count, originalNum, remainder;
   float result;
   count=0;
   num = 0;
while (count<20){
   int n = 0; // moved inside the loop
   result = 0.0; // moved inside the loop
   originalNum = num;

   // store the number of digits of num in n
   for (originalNum = num; originalNum != 0; ++n) {
       originalNum /= 10;
   }

   originalNum = num; // reset originalNum after the above loop

   for (originalNum = num; originalNum != 0; originalNum /= 10) {
       remainder = originalNum % 10;

      // store the sum of the power of individual digits in result
      result += pow(remainder, n);
   }

   // if num is equal to result, the number is an Armstrong number
   if ((int)result == num){
    printf("\n%d is an Armstrong number.", num);
    count++;
   }
    num++;
}
   return 0;
}