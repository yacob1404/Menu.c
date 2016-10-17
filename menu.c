#include <stdio.h>

void menu()
{
  printf("*******************\n");
  printf("*   1: Add        *\n");
  printf("*   2: Subtract   *\n");
  printf("*   3: Multiply   *\n");
  printf("*   4: Divide     *\n");
  printf("*   5: Modulus    *\n");
  printf("*   6: Factorial  *\n");
  printf("*   7: Summation  *\n");
  printf("*   8: Max        *\n");
  printf("*   9: Rect Area  *\n");
  printf("*  10: Square     *\n");
  printf("*  11: Roll Dice  *\n");
  printf("*  12: Tip Calc   *\n");
  printf("*  -1: QUIT       *\n");
  printf("*******************\n");
}

int add(int x, int y)
{
  return x + y;
}

int subtract(int x, int y)
{
  return x - y;
}

int multiply(int x, int y)
{
  return x * y;
}

int divide(int x, int y)
{
  return x / y;
}

int modulus(int x,int y)
{
  return x % y;
}

int factorial(int x)
{
  int ans = 1;
  int i;
  for (i = 1;i <= x; i++)
  {
    ans = ans * i;
  }
  return ans;
}

int summation(int x)
{
  int ans = 0;
  int i;
  for (i = 0; i<= x; i++)
  {
    ans = ans + i;
  }
  return ans;
}

int max(int x, int y)
{
 int ans;
 if (x > y)
 {
   ans = x;
 }
 else
 {
  ans = y;
 }
 return ans;
}

int rect(int x, int y)
{
  return x * y;
}

int square(int x)
{
  return x * x;
}

int dice()
{
 int ans;
 srand(time(0));
 ans = rand()%6+1;
 return ans;
}

float myTip(float x)
{
 return x * .2;
}

int main()
{
  int loop,x,y,ans;
  float tip,tipx,tipAns;

  while (loop >= 0)
  {
   menu();
   printf("Enter a digit: ");
   scanf("%i",&loop);
   switch (loop)
   {
     case 1:
      printf("Enter an integer for X: ");
      scanf("%i",&x);
      printf("Enter an integer for Y: ");
      scanf("%i",&y);
      ans = add(x,y);
      printf("%i + %i = %i\n", x,y,ans);
      break;
     case 2:
      printf("Enter an integer for X: ");
      scanf("%i",&x);
      printf("Enter an integer for Y: ");
      scanf("%i",&y);
      ans = subtract(x,y);
      printf("%i - %i = %i\n", x,y,ans);
      break;
     case 3:
      printf("Enter an integer for X: ");
      scanf("%i",&x);
      printf("Enter an integer for Y: ");
      scanf("%i",&y);
      ans = multiply(x,y);
      printf("%i * %i = %i\n", x,y,ans);
      break;
     case 4:
      printf("Enter an integer for X: ");
      scanf("%i",&x);
      printf("Enter an integer for Y: ");
      scanf("%i",&y);
      ans = divide(x,y);
      printf("%i / %i = %i\n", x,y,ans);
      break;
     case 5:
      printf("Enter an integer for X: ");
      scanf("%i",&x);
      printf("Enter an integer for Y: ");
      scanf("%i",&y);
      ans = modulus(x,y);
      printf("%i mod %i = %i\n",x,y,ans);
      break;
     case 6:
      printf("Enter an integer for X: ");
      scanf("%i",&x);
      ans = factorial(x);
      printf("%i factoral = %i\n",x,ans);
      break;
     case 7:
      printf("Enter an integer for X: ");
      scanf("%i",&x);
      ans = summation(x);
      printf("%i summation = %i\n",x,ans);
      break;
     case 8:
      printf("Enter an integer for X: ");
	    scanf("%i",&x);
	    printf("Enter an integer for Y: ");
	    scanf("%i",&y);
	    ans = max(x,y);
	    printf("Your max was %i\n",ans);
      break;
     case 9:
      printf("Enter a length: ");
	    scanf("%i",&x);
	    printf("Enter a width: ");
	    scanf("%i",&y);
	    ans = rect(x,y);
	    printf("Your rectangle is %i by %i with an area of %i",x,y,ans);
      break;
     case 10:
      printf("Enter your squares length: ");
	    scanf("%i",&x);
	    ans = square(x);
	    printf("Your squares area is %i",ans);
      break;
     case 11:
      ans = dice();
	    printf("Your random number is %i",ans);
      break;
     case 12:
      printf("Enter you bill subtotal: ");
	    scanf("%f",&tipx);
	    tipAns = myTip(tipx);
	    printf("Your tip is: %.2f",tipAns);
      break;
   }
   printf("\n");
  }
  return 0;
}
