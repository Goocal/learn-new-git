#include <stdio.h>

int main()
{
  // BIGWISE OPERATORS = spacial operators used in bit level programming
  //                    (knowing binary is important for this topic)


  // & = AND
  // | = OR
  // ^ = XOR
  // << LEFT SHIFT
  // >> RIGHT SHIFT

  int x = 6;    //  3 =  00000011
  int y = 12;   // 12 =  00001100
  int z = 0;    //  =    00000011

z = x & y;


printf("AND = %d\n", z);

z = x | y;

printf("OR = %d\n", z);

z = x ^ y;
printf("XOR = %d\n", z);

z = x << 1;
printf("LEFT SHIFT = %d\n", z);

z = x >> 3;
printf("RIGHT SHIFT = %d\n", z);


    return 0;
}