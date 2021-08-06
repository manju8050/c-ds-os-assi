C Storage Class

There are 4 types of storage class:

automatic
external
static
register


Local Variable

Local Variable
The variables declared inside a block are automatic or local variables. The local variables exist only inside the block in which it is declared.

Let's take an example.

#include <stdio.h>

int main(void) 
{
  
  for (int i = 0; i < 5; ++i) 
  {
     printf("C programming");
  }
  
 // Error: i is not declared at this point
  printf("%d", i);  
  return 0;
}



Global Variable

Variables that are declared outside of all functions are known as external or global variables. They are accessible from any function inside the program.

Example 1: Global Variable
#include <stdio.h>
void display();

int n = 5;  // global variable

int main()
{
    ++n;     
    display();
    return 0;
}

void display()
{
    ++n;   
    printf("n = %d", n);
}
Output

n = 7



Register Variable
The register keyword is used to declare register variables. Register variables were supposed to be faster than local variables.



Static Variable
A static variable is declared by using the static keyword. For example;

Static Variable
#include <stdio.h>
void display();

int main()
{
    display();
    display();
}
void display()
{
    static int c = 1;
    c += 5;
    printf("%d  ",c);
}
Output

6 11