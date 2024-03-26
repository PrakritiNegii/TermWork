/*
NAME:					      PRAKRITI NEGI
UNIVERSITY ROLL NO:	   2023784
SECTION:				      F

1.  Write a user defined function in C to print all the unique elements in an array. */

#include<stdio.h>
void uniqueElement(int[], int);
int main()
 {
  int n, a[100], i;
  printf("\n**********INPUT**********");
  printf("\nSpecify the number of elements to be stored in an array.\n");
  scanf("%d",&n);
  printf("\nInput array elements.\n");
  for(i=0; i<n; i++)
    scanf("%d",&a[i]); 
  uniqueElement(a,n);
  return 0;
 }

void uniqueElement(int A[], int l) 
 {
  int i, j, k, c;
  printf("\n**********OUTPUT**********");
  printf("\nThe unique elements found in the array are: ");
  for(i = 0; i < l; i++) 
   {
     c = 1;
     for(j = 0; j < l; j++) 
      {
       if(i != j && A[i] == A[j]) 
        {
         c = 0;
         break;
        }
      }
     if(c)  //c!=0
      { 
       printf("%d ", A[i]);
      }
   }
 }
 
/*
**********INPUT**********
Specify the number of elements to be stored in an array.
7

Input array elements.
56
74
345
890
74
56
7

**********OUTPUT**********
The unique elements found in the array are: 345 890 7 

*/