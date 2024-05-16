/*
NAME:					         PRAKRITI NEGI
UNIVERSITY ROLL NO:	   2023784
SECTION:				       F

11. Write a C program to read a text file named "Data.txt", create another file named 
    "Del.txt" deleting the words "a", "the", "an" from the file "Data.txt" and replacing 
    each one of them with a blank space in "Del.txt". */
#include<stdio.h>
#include<string.h>
int main()
 {
  FILE *fp, *fp2;
  char S[50];
  fp = fopen("C:/Users/prakr/Documents/TermWork/SEM2/Data.txt","r");
  printf("\n**********INPUT**********"); 
  printf("\nThe data present in Data.txt is:\n\n");
  while(fgets(S,50,fp))
   {
    printf("%s",S);
   }
  fseek(fp,0,0);
  fp2 = fopen("C:/Users/prakr/Documents/TermWork/SEM2/Del.txt","w");
  if(fp2==NULL) printf("\nFile Del.txt not created.\n");
  else
  {  
    while(fscanf(fp,"%s",S)!=EOF)
     {
      if(strcmp(S,"the")==0 || strcmp(S,"a")==0 || strcmp(S,"an")==0 || strcmp(S,"The")==0 || strcmp(S,"A")==0 || strcmp(S,"An")==0)
       {
        fputs("   ",fp2);
       }
      else 
       {
        fputs(S,fp2);
        fputs(" ",fp2);
       }
     }
    fclose(fp);
    fclose(fp2);
    fp2 = fopen("C:/Users/prakr/Documents/TermWork/SEM2/Del.txt","r");
    printf("\n\n\n**********OUTPUT**********");
    printf("\nThe data present in Del.txt is:\n\n");
    while(fgets(S,50,fp2))
     {
      printf("%s",S);
     }
    fclose(fp2);
   }
  return 0;
 }

/*
        OUTPUT 
C:\Users\Praks\Desktop\TermWork>gcc 11.c
C:\Users\Praks\Desktop\TermWork>./a.exe

**********INPUT**********
The data present in Data.txt is:

A thick smoke rose from the middle of a road, loud honking and angry speeches were the only sounds.
Some people of the town were protesting to express their anger with the government about their sloppy
attitude in catching the kidnapper and trafficer of young women in the town. A ruckus was created in the
middle of a busy road causing the localites much trouble and delay. The protestors believe that an
immediate action was missing by the authorities even when they recieved details of the culprit causing
him to still be free after three months. Victims and their families have been neglected and so the angered
public thought burning posters and mannequins of those in power as a form of protest was their only option
left to bring them the required attention.


**********OUTPUT**********
The data present in Del.txt is:

   thick smoke rose from    middle of    road, loud honking and angry speeches were    only sounds. Some 
people of    town were protesting to express their anger with    government about their sloppy attitude in 
catching    kidnapper and trafficer of young women in    town.    ruckus was created in    middle of    busy 
road causing    localites much trouble and delay.    protestors believe that    immediate action was missing 
by    authorities even when they recieved details of    culprit causing him to still be free after three months. 
Victims and their families have been neglected and so    angered public thought burning posters and mannequins 
of those in power as    form of protest was their only option left to bring them    required attention. 
*/
