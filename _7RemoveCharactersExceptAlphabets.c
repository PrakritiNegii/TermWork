/*
NAME:					         PRAKRITI NEGI
UNIVERSITY ROLL NO:	   2023784
SECTION:				       F

7. Write a program to remove characters from a string except alphabets. */

#include<stdio.h>
#include<string.h>
int main()
 {
   char S[100];
   int i, j;
   printf("\n**********INPUT**********");
   printf("\nInput a string:\n");
   fgets(S,100,stdin);
   int l = strlen(S);
   for(i=0; i<l; i++)
    {
      if(!((S[i]>64 && S[i]<91) || (S[i]>96 && S[i]<123)))
       {
        for(j=i; j<l; j++)
         {
           S[j] = S[j+1];
         }
        i--;
        l--;
       }
    }
   printf("\n**********OUTPUT**********");
   printf("\nInput string after removing all the characters except alphabets is:\n");
   puts(S);
   return 0;
 }

/*
**********INPUT**********
Input a string:
GraphicEra1234@geu.ac.in Student#GEU

**********OUTPUT**********
Input string after removing all the characters except alphabets is:
GraphicErageuacinStudentGEU
*/