/*
NAME:					         PRAKRITI NEGI
UNIVERSITY ROLL NO:	   2023784
SECTION:			    	   F

6. Write a user defined function to find the highest frequency character in a string. */

#include<stdio.h>
#include<string.h>
char maxfreq(char[], int);
int main()
 {
   char S[100], f;
   int C[100], l;
   printf("\n**********INPUT**********");
   printf("\nInput a string:\n");
   fgets(S,100,stdin);
   l = strlen(S);
   f = maxfreq(S,l);
   printf("\n**********OUTPUT**********");
   printf("\nThe most frequent element in the string is: '%c'\n",f);
   return 0;
 }

char maxfreq(char S[], int l)
 {
   char f;
   int C[100], B, F, c, i, j, k;
   for(i=0; i<l-1; i++)
    {
      c = 1;
      for(j=i+1; j<l-1; j++)
	     {
 	      if(S[i]==S[j]) 
 	        {
	         c++;
           for(k=j; k<l-1; k++)
		        {
		         S[k] = S[k+1];
		        }
	         j--;
           l--;
	        }
       }
      C[i] = c;
    }
   B = C[0], F = 0;
   for(i=1; i<l-1; i++)
    {
     if(C[i]>B) 
	    {
	     B = C[i];
	     F=i;
      }
    }
   f = S[F];
   return f;
 }

/*
**********INPUT**********
Input a string:
bees seeek nectaar

**********OUTPUT**********
The most frequent element in the string is: 'e'


**********INPUT**********
Input a string:
fresh fish makes fairly fine food

**********OUTPUT**********
The most frequent element in the string is: 'f'
*/