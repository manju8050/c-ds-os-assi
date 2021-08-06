4) Program to explain all storage classes scope.

C Storage Class

There are 4 types of storage class:

automatic
external
static
register


The auto Storage Class

The auto storage class is the default storage class for all local variables.
It is access with a block or function.

ex:-
{
   int mount;
   auto int month;
}



Register Variable
The register keyword is used to declare register variables. Register variables were supposed to be faster than local variables.
  Int main()
{
	Register int num = 20;
	Printf(“%d\n”,num);
	Printf(“%p\n”,&num);       // error address of register variable not able to print)
	Return 0;
}
The register should only be used for variables that require quick access such as counters.




Static Variable

The static storage class instructs the compiler to keep a local variable in existence during 
the life-time of the program instead of creating and destroying it each time it comes into and goes out of scope.

A static variable is declared by using the static keyword. For example;

Int main()
{
	for(int i=0;i<5;i++)
{
Disp();
Return 0;
}
Disp()
{
	Auto int num1;
	Num1 = 0;
	Static int num2 = 0;
	Print(“%d %d\n”,num1,num2);
	Num1++;
	Num2++;
}

Output:
00
01
02
03
04
  
 
  
  
The extern Storage Class
When you have multiple files and you define a global variable or function, which will also be used in other files, then extern will be used in another file to provide the reference of defined variable or function.

Ex :

#include<stdio.h>
Int main()
{
Extern int num;
Print(“%d\n”,num);
Return;
}

File2
Int num =10;

Gcc file1.c file2.c

