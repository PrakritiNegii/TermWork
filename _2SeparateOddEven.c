/*
NAME:					         PRAKRITI NEGI
UNIVERSITY ROLL NO:	   2023784
SECTION:				       F

2.  Write a program in C to separate odd and even integers into separate arrays.   */

#include<stdio.h>
int main()
 {
  int n, a[100], e[100], o[100], i, j, k, sj, sk;
  printf("\n**********INPUT**********");
  printf("\nSpecify the number of elements to be stored in an array.\n");
  scanf("%d",&n);
  printf("\nInput %d elements in the array.\n",n);
  for(i=0; i<n; i++)
    scanf("%d",&a[i]); 
  j=0, k=0; sj=0, sk=0;
  for(i=0; i<n; i++)
   {
    if(a[i]%2==0) 
      {
        e[j] = a[i]; 
        j++; sj++;
      }
    else
      {
        o[k] = a[i];
        k++; sk++;
      }
   } 
   printf("\n**********OUTPUT**********");
   printf("\nThe even elements are:");
   for(j=0; j<sj; j++)
     printf(" %d",e[j]);
   printf("\nThe odd elements are:");
   for(k=0; k<sk; k++)
     printf(" %d",o[k]);
   return 0;
 }

/*
**********INPUT**********
Specify the number of elements to be stored in an array.
10

Input 10 elements in the array.
3245
534
768
3427
4367
989
126
324
888
724

**********OUTPUT**********
The even elements are: 534 768 126 324 888 724
The odd elements are: 3245 3427 4367 989

*/