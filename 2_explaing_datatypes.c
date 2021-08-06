2)Program to Explain all data types including signed and unsigned.

#include <stdio.h>      
int main() 
{
  
  int b = -10;
  float c = 10.10;
  char d = 'a';
  unsigned int x = 10;

  printf("size of int = %d bytes\n", sizeof(b));
  printf("size of float = %d bytes\n", sizeof(c));
  printf("size of char = %d bytes\n", sizeof(d));
  printf("size of unsigned int = %d bytes\n", sizeof(x));

  printf("int value %d\n",b);
  printf("float value %f\n",c);
  printf("char %c\n",d);
  printf("unsigned int value %u\n",x);

  unsigned int y = -110;
  printf("unsigned int value %u\n",y);
  return 0;
}


/*

size of int = 4 bytes
size of float = 4 bytes
size of char = 1 bytes
size of unsigned int = 4 bytes
int value -10
float value 10.100000
char a
unsigned int value 10
unsigned int value 4294967186

*/
