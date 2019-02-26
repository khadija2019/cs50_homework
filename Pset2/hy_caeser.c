#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (int argc, string argv[])
{
if (argc==2)
   {
      string z;
       int k=atoi(argv[1]);
       z=get_string("plaintext: ");
printf("cyphertext: ");
for(int i=0;i<strlen(z);i++)
   if(isalpha(z[i]))
       {
          if(isupper(z[i]))
          {
             printf("%c",(((z[i]- 65)+ k)%26)+ 65);
          }
          if(islower(z[i]))
          {
             printf("%c",(((z[i]- 97)+ k)%26)+ 97);
          }
       }
   else
   {
      printf("%c",z[i]);
   }
}
}