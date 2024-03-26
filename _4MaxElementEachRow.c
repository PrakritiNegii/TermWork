/*
NAME:					         PRAKRITI NEGI
UNIVERSITY ROLL NO:	   2023784
SECTION:				       F

4. Write a program in C to find the maximum element of each row of a matrix. */

#include<stdio.h>
int main()
 {
  int r, c, a[10][10], i, j, B;
  printf("\n**********INPUT**********");
  printf("\nSpecify the number of rows and columns in a matrix.\n");
  scanf("%d %d",&r, &c);
  printf("\nInput %d elements in the array.\n",r*c);
  for(i=0; i<r; i++)
    for(j=0; j<c; j++)
      scanf("%d",&a[i][j]);
  printf("\n**********OUTPUT**********");
  printf("\nThe given array is:\n");
  for(i=0; i<r; i++)
   {
    for(j=0; j<c; j++)
     {
       printf("%d ",a[i][j]);
     }
    printf("\n");
   }
  for(i=0; i<r; i++)
   {
    B = a[i][0];
    for(j=0; j<c; j++)
     {
       if(a[i][j]>B) B = a[i][j];
     }
    printf("\nThe maximum element in row %d is: %d",i+1,B);
   }
  return 0;
 }

/*
**********INPUT**********
Specify the number of rows and columns in a matrix.
3
4

Input 12 elements in the array.
34
67
967
44
56
23
787
23
564
76
43
545

**********OUTPUT**********
The given array is:
34 67 967 44 
56 23 787 23 
564 76 43 545 

The biggest element in row 1 is: 967
The biggest element in row 2 is: 787
The biggest element in row 3 is: 564
*/
