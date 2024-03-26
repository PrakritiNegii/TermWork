/*
NAME:					         PRAKRITI NEGI
UNIVERSITY ROLL NO:	   2023784
SECTION:				       F

5. Write a program in C to split string by space into words. */

#include<string.h>
#include<stdio.h>
int main()
 {
   char S[100];
   int i;
   printf("\n**********INPUT**********");
   printf("\nInput a string.\n");
   fgets(S,100,stdin);
   i=0;
   while(S[i]!='\0')
    {
      if(S[i]==' ') S[i] = '\n';
      i++;
    }
   printf("\n**********OUTPUT**********");
   printf("\nString after split by space is:\n");
   puts(S);
   return 0;
 }

/*
**********INPUT**********
Input a string.
there is no one else

**********OUTPUT**********
String after split by space is:
there
is
no
one
else
*/
