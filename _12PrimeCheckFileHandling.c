/*
NAME:					         PRAKRITI NEGI
UNIVERSITY ROLL NO:	   2023784
SECTION:				       F

12. Write a program to read 20 integers in a file. Separate them into two different files prime.txt
    and nonprime.txt such that all prime numbers are copied in prime.txt and remaining numbers in
    nonprime.txt. */
#include<stdio.h>
#include<string.h>
int primeCheck(int n, int i)
 {
  if(n==1) return 0;
  if(i==n) return 1;
  if(i<n && n%i==0) return 0;
  else return primeCheck(n,++i); 
 }

int main()
 {
  FILE *f, *fp, *fnp;
  int i, num, res, pc=0, npc=0;
  char ch, S[50];
  f = fopen("Num.txt","w");
  if(f==NULL) printf("\nFile Num.txt not created.\n");
  else
  {  
    printf("\n**********INPUT**********"); 
    printf("\nInput 20 integers:\n");
    for(i=1; i<=20; i++)
     {
      scanf("%d",&num);
      putw(num,f);
     }
    fclose(f);
    f = fopen("Num.txt","r");
    fp = fopen("Prime.txt","w");
    fnp = fopen("NonPrime.txt","w");
    for(i=1; i<=20; i++)
     {
      num = getw(f);
      res = primeCheck(num,2);
      if(res==1) 
       { 
        putw(num,fp); 
        pc++;
       }
      else 
       {
        putw(num,fnp); 
        npc++;
       }
     }
    fclose(f);
    fclose(fp);
    fclose(fnp);
    fp = fopen("Prime.txt","r");
    fnp = fopen("NonPrime.txt","r");
    printf("\n\n\n**********OUTPUT**********");
    printf("\nThe numbers in Prime.txt are:\n");
    i=0;
    while(i<pc)
     {
      num = getw(fp);
      printf("%d\n",num);
      i++;
     }
    fclose(fp);
    printf("\nThe numbers in NonPrime.txt are:\n");
    i=0;
    while(i<npc)
     {
      num = getw(fnp);
      printf("%d\n",num);
      i++;
     }
    fclose(fnp);
   }
  return 0;
 }

/*
        OUTPUT 
C:\Users\Praks\Desktop\TermWork>gcc 12.c
C:\Users\Praks\Desktop\TermWork>./a.exe

**********INPUT**********
Input 20 integers:
1
2
3
5
6
7
8
9
11
12
13
16
17
18
21
23
101
117
1137
4217



**********OUTPUT**********
The numbers in Prime.txt are:
2
3
5
7
11
13
17
23
101
4217

The numbers in NonPrime.txt are:
1
6
8
9
12
16
18
21
117
1137 

        OUTPUT 
C:\Users\Praks\Desktop\TermWork>gcc 12.c
C:\Users\Praks\Desktop\TermWork>./a.exe

**********INPUT**********
Input 20 integers:
47
13
4571
324
6452
907
2343
63
234
78
1
2441
87
331
7595
3049
1378
863
23
9836



**********OUTPUT**********
The numbers in Prime.txt are:
47
13
907
2441
331
3049
863
23

The numbers in NonPrime.txt are:
4571
324
6452
2343
63
234
78
1
87
7595
1378
9836
*/
