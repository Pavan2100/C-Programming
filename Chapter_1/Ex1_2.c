/*Experiment to find out what happens when pr int f's argument string contains 
\c, where c is some character not listed above. */

#include<stdio.h>
int main()
{
     printf("hello, world\y");              //the output will print along with it

     return 0;
}


// Ex1_2.c: In function ‘main’:
// Ex1_2.c:7:13: warning: unknown escape sequence: '\c'
//     7 |      printf("hello, world\c");
//       |             ^~~~~~~~~~~~~~~~