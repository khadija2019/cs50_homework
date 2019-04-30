#define _XOPEN_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main( int argc,string argv[])
{
    if (argc != 2)
    {
        printf("usage:crack <hash>\n");
        return 1;
    }
    int mad_count = 53;
    string letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string hash = argv [1];
    char salt[3];
    memcpy(salt,hash,2);
    salt[2] = '\0';


    char bab_had[5] = "\0\0\0\0\0";
    for (int quatrieme =0;quatrieme<mad_count;quatrieme++)
    {
        for (int troisieme =0;troisieme<mad_count;troisieme++)
        {
            for (int deusieme =0;deusieme<mad_count;deusieme++)
            {
                for (int premier =0;premier<mad_count;premier++)
                {
                    bab_had[0] = letters[premier];
                    bab_had[1] = letters[deusieme];
                    bab_had[2] = letters[troisieme];
                    bab_had[3] = letters[quatrieme];

                    if(strcmp(crypt(bab_had,salt),hash) == 0)
                    {
                        printf("%s \n",bab_had);
                        return 0;
                    }

                }
            }
        }
    }
printf("password couldn't be cracked!");
return 2;
}