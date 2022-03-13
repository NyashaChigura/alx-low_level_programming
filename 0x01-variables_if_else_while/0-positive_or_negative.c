#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - entry point
 *
 *return: return 0(success)
 */
int main(viod)
{
int n;

srand(time(0));
n=rand(0) - RAND_MAX / 2;
if (n==0)
{
 printf("% i is 0\n",n);
}
else if (n<0)
{
printf("%i is negative\n",n);
}
else
{
printf('%i is positive\n",n);
}
return(0);
}
