/*
NAME:					         PRAKRITI NEGI
UNIVERSITY ROLL NO:	   2023784
SECTION:				       F

3.  Write a program in C to find the sum of the lower triangular elements of a matrix. */

#include<stdio.h>
int main()
 {
  int r, c, a[10][10], i, j, sum;
  printf("\n**********INPUT**********");
  printf("\nSpecify the number of rows and columns in a matrix.\n");
  scanf("%d %d",&r, &c);
  printf("\nInput %d elements in the array.\n",r*c);
  for(i=0; i<r; i++)
    for(j=0; j<c; j++)
      scanf("%d",&a[i][j]); 
   printf("\n**********OUTPUT**********");
   printf("\nThe given matrix is:\n");
   for(i=0; i<r; i++)
    {
     for(j=0; j<c; j++)
      {
        printf("%d ",a[i][j]);
      }
     printf("\n");
    }
   sum = 0;
   printf("\nThe elements of the lower triangular matrix are:");
   for(i=0; i<r; i++)
    {
     for(j=0; j<c; j++)
      {
        if(j<=i)
         {
           printf(" %d",a[i][j]); 
           sum = sum + a[i][j];
         }
      }
    }
   printf("\nSum of the lower triangular matrix is: %d",sum);
   return 0;
 }

/*
**********INPUT**********
Specify the number of rows and columns in a matrix.
4
4

Input 16 elements in the array.
2
9
6
7
3
4
8
5
4
0
1
5
0
8
2
7

**********OUTPUT**********
The given matrix is:
2 9 6 7 
3 4 8 5 
4 0 1 5 
0 8 2 7 

The elements of the lower triangular matrix are: 2 3 4 4 0 1 0 8 2 7
Sum of the lower triangular matrix is: 31
*/
