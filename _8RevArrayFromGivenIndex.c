/*
NAME:					         PRAKRITI NEGI
UNIVERSITY ROLL NO:	   2023784
SECTION:				       F

8. Write a program to input an array and reverse the array elements from particular index
   to the last using dynamic memory allocation. */

#include<stdlib.h>
#include<stdio.h>
int main()
 {
  int *A, n, i, index, j, temp;
  printf("\n**********INPUT**********");
  printf("\nSpecify the number of elements in the array.\n");
  scanf("%d",&n);
  A = (int*) malloc(n*sizeof(int));
  printf("\nInput array elements.\n");
  for(i=0; i<n; i++)
   {
    scanf("%d",(A+i));
   }
  printf("\nInput index from which the array is to be reversed.\n");
  scanf("%d",&index);
  for(i=index, j=n-1; i<j; i++, j--)
   {
    temp = *(A+i);
    *(A+i) = *(A+j);
    *(A+j) = temp;
   }
  printf("\n**********OUTPUT**********");
  printf("\nArray after reversing elements from index %d to %d:\n",index, n-1);
  for(i=0; i<n; i++)
   {
    printf("%d\n",*(A+i));
   }
  return 0;
 }

/*
        OUTPUT 
C:\Users\Praks\Desktop\TermWork>gcc 8.c
C:\Users\Praks\Desktop\TermWork>./a.exe

**********INPUT**********
Specify the number of elements in the array.
10

Input array elements.
0
1
2
3
9
8
7
6
5
4

Input index from which the array is to be reversed.
4

**********OUTPUT**********
Array after reversing elements from index 4 to 9:
0
1
2
3
4
5
6
7
8
9
*/
