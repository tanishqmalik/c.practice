/*#include <stdio.h>
int main(int argc, char const *argv[])
{
    int *p, a;
    printf("enter value for a");
    scanf("%d", &a);

    p = &a;
    printf("%p",p);
    return 0;
}


#include <stdio.h>
int main(int argc, char const *argv[])
{
    float b;
    float *p;
    printf("enter the value of b\n");
    scanf("%f",&b);

    p=&b;
    printf("the address of %f is %u \n", b, p);
    printf("rhe value at address %u is %.2f",p,*p);
    return 0;
}

*/
#include<stdio.h>

int main()
{
   float floatArray[10];
   int i;
   for(i=0; i<10; i++)
      {
	   printf("Enter Element No:%d=",i+1);
       scanf("%f", &floatArray[i]);
      }
    printf("The elements of array are:\n");
    for(i=0;i<10;i++)
      printf("%.2f\n", floatArray[i]);
   
   return 0;
}


#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;

    return 0;
}
