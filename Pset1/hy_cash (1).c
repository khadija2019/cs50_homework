#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int n ;
    int a = 500;
    int b = 250;
    int c = 200;
    int d = 100;
    int e = 50;
    int f = 25;
    int g = 10;
    int h = 5;
    do
    {
        n = get_int("la monnaie souhaitee :");
    }
    while (n<0);
    int counter = 0;
    while (n>=a)
    {
        n = n-a;
        counter ++;
    }

    while (n>=b)
    {
        n = n-b;
        counter++;
    }

    while (n>=c)
    {
        n = n-c;
        counter++;
    }

    while(n>=d)
    {
        n = n-d;
        counter++;
    }

    while(n>=e)
    {
        n = n-e;
        counter++;
    }
    while(n>=f)
    {
        n = n-f;
        counter++;
    }

    while(n>=g)
    {
        n = n -g;
        counter++;
    }

    while(n>=h)
    {
        n = n-h;
        counter++;
   }
  printf("le nombre de piece %i",counter);
}