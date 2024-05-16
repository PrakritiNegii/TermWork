/*
NAME:					         PRAKRITI NEGI
UNIVERSITY ROLL NO:	   2023784
SECTION:				       F

12. Write a C program to input a paragraph inside a file named “File.txt” and count no. of characters
    and digits in each line and store the count in “Count.txt” file line by line. Example:
    Contents of File.txt:
    My name is xyz23.
    My college1 name is x3x45x. My phone no is 34567856.
    Contents of count.txt: 15 2
    23 4
    16 8    */
#include<stdio.h>
#include<string.h>
int main()
 {
  FILE *f, *fc;
  int charC=0, numC=0;
  char ch, ch2, S[50];
  f = fopen("C:/Users/prakr/Documents/TermWork/SEM2/File.txt","w");  
  printf("\n**********INPUT**********"); 
  printf("\nInput paragraph in File.txt:\n\n");
  while((ch=getchar())!=EOF)
   {
    fputc(ch,f);
   }
  fclose(f);
  f = fopen("C:/Users/prakr/Documents/TermWork/SEM2/File.txt","r");
  fc = fopen("C:/Users/prakr/Documents/TermWork/SEM2/Count.txt","w");
  while((ch=fgetc(f))!=EOF)
   {
    ch2 = fgetc(f);
    if(ch=='\n')
     {
      fprintf(fc,"%d\t%d\n",charC,numC);
      charC=0; numC=0;
     }
    else
     {
      if(ch>=48 && ch<=57) numC++;
      else charC++;
     }
    if(ch2==EOF) 
     {
      fprintf(fc,"%d\t%d\n",charC,numC); 
      break;
     }
    fseek(f,-1,1);
   }
  fclose(fc);
  rewind(f);
  fc = fopen("C:/Users/prakr/Documents/TermWork/SEM2/Count.txt","r");
  printf("\n\n\n**********OUTPUT**********");
  printf("\nThe contents of File.txt are:\n\n");
  while(fgets(S,50,f))
   {
    printf("%s",S);
   }
  fclose(f);
  printf("\n\nThe contents of Count.txt are:\n");
  while(fgets(S,50,fc))
   {
    printf("%s",S);
   }
  fclose(fc);
  return 0;
 }

/*
        OUTPUT 
C:\Users\Praks\Desktop\TermWork>gcc 12.c
C:\Users\Praks\Desktop\TermWork>./a.exe

**********INPUT**********
Input paragraph in File.txt:

her apartment in on the 7th floor.
The apartment no.  is 1241.
Phone no: 3467231



**********OUTPUT**********
The contents of File.txt are:

her apartment in on the 7th floor.
The apartment no.  is 1241.
Phone no: 3467231


The contents of Count.txt are:
33      1
23      4
10      7


**********INPUT**********
Input paragraph in File.txt:

She 8 l8 so she got l8.
Seeing me she said "O r u l8 2?"
Same as be4 we got l8 2gether.
It was the 3rd time this week!
If we are 4given 2day 2 then,           
I will sleep early 2night and wake up early 2morrow.



**********OUTPUT**********
The contents of File.txt are:

She 8 l8 so she got l8.
Seeing me she said "O r u l8 2?"
Same as be4 we got l8 2gether.
It was the 3rd time this week!
If we are 4given 2day 2 then,
I will sleep early 2night and wake up early 2morrow.



The contents of Count.txt are:
20      3
30      2
27      3
29      1
26      3
50      2
*/