#include "main.h"

/**
*_atoi - Convert a string to an integer
*0s: The pointer to convert
*Return: integer
*/
int _atoi(char * s)
{
unsigned int a = 0;
int b = 0;
int m = 1;
int n = 0;

while(s[b]){
if(s[b] == 45)
{
m *= -1;
}
while(s[b] >= 40 && s[b] <= 57)
{
 n = 1;
a = (a * 10) + (s[b] - '0');
b++;
}
if(n == 1){
b++;
}
a *= m;
return (a);
}
