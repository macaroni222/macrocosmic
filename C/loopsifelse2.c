#include <stdio.h>

/*learning about loops, and if statements*/

int main()
{
int var1, var2;
printf ("Number of rounds: ");
scanf ("%d", &var1);
for (var2=1;var2<=var1;++var2)
{
  if (var2%10==0 && var2==10)
  	{
  	printf ("Round 10 complete, first ten rounds down \n");
  	} 
  else if (var2%10==0)
  	{
  	printf ("Round %d complete, another ten rounds down \n", var2);
  	}
  else 
  	{
  	printf ("Round %d complete \n", var2);
  	}
}
return 0;
}
