#include<stdio.h>

int main()
{
	int r;
	printf("enter the radius:");
	scanf("%d",&r);
	float area = 3.14*(r*r);
	float cir = 2*3.14*r;
	
	printf("the area of thr circle is %f\n",area);
	printf("the circumference of a circle is %f",cir);
	
	return 0;
}


/*

enter the radius:8
the area of thr circle is 200.960007
the circumference of a circle is 50.240002


*/

#include<stdio.h>

int main()
{
	int r;
	printf("enter the radius:");
	scanf("%d",&r);
	float area = 3.14*(r*r);
	float cir = 2*3.14*r;
	
	printf("the area of thr circle is %.2f\n",area);
	printf("the circumference of a circle is %f",cir);
	
	return 0;
}

/*
enter the radius:8
the area of thr circle is 200.96
the circumference of a circle is 50.240002


*/