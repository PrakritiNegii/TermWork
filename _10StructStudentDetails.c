/*
NAME:					         PRAKRITI NEGI
UNIVERSITY ROLL NO:	   2023784
SECTION:				       F

10. Create a structure to specify data on students in fields: Roll Number, Name, Department,
    Course, Year of joining. Assume that there are no more than 450 students in the college then:   
(a) Write a function to print the names of all the students who joined in a particular year.
(b) Write a function to print the data of a student whose roll number is given. */

#include<stdlib.h>
#include<stdio.h>

typedef struct Student
 {
  unsigned int roll_no, year;
  char name[30], dep[50], course[20];
 } stu;

int main()
 {
  stu S[450];
  int n, i, y, c=0, roll;
  printf("\n**********INPUT**********");
  printf("\nSpecify the number of students whose data is to be input.\n");
  scanf("%d",&n);
  for(i=0; i<n; i++)
   {
    printf("\nInput details of student %d.\n",i+1);
    printf("\nInput Roll Number: ");
    scanf("%u",&S[i].roll_no);
    printf("Input Name: ");
    scanf(" %[^\n]",&S[i].name);
    printf("Input Department: ");
    scanf(" %[^\n]",&S[i].dep);
    printf("Input Course: ");
    scanf(" %[^\n]",&S[i].course);
    printf("Input Year of Joining: ");
    scanf(" %u",&S[i].year);
   }
  printf("\n**********OUTPUT**********");
  printf("\nInput the year for which all the new joined students are to be printed.\n");
  scanf("%d",&y);
  printf("\nStudents that joined in the year %d are:\n",y);
  for(i=0; i<n; i++)
   {
    if(S[i].year==y) 
     {
      c++;
      printf("%s\n",S[i].name);
     }
   }
  if(c==0) printf("No students.\n");
  printf("\nInput Roll Number of the student whose details are to be printed.\n");
  scanf("%d",&roll);
  for(i=0; i<n; i++)
   {
    if(S[i].roll_no==roll) 
     {
      break;
     }
   }
  if(i<n)
   {
    printf("\nRoll No is: %d\n",S[i].roll_no);
    printf("Name is: %s\n",S[i].name);
    printf("Department is: %s\n",S[i].dep);
    printf("Course is: %s\n",S[i].course);
    printf("Year of joining is: %d\n",S[i].year); 
   }
  else printf("\nNo details of student with Roll No. %d are present.\n",roll);
  return 0;
 }

/*
        OUTPUT 
C:\Users\Praks\Desktop\TermWork>gcc 10.c
C:\Users\Praks\Desktop\TermWork>./a.exe

**********INPUT**********
Specify the number of students whose data is to be input.
3

Input details of student 1.

Input Roll Number: 45
Input Name: Prakriti Negi
Input Department: Computer Science
Input Course: B-Tech
Input Year of Joining: 2023

Input details of student 2.

Input Roll Number: 13
Input Name: Ankita Pokhariyal
Input Department: Electrical and Electronics
Input Course: B-Tech
Input Year of Joining: 2020

Input details of student 3.

Input Roll Number: 33
Input Name: Bhavyansh Kapoor
Input Department: English
Input Course: English Honours
Input Year of Joining: 2023

Input the year for which all the new joined students are to be printed.
2023

Students that joined in the year 2023 are:
Prakriti Negi
Bhavyansh Kapoor

Input Roll Number of the student whose details are to be printed.
13

Roll No is: 13
Name is: Ankita Pokhariyal
Department is: Electrical and Electronics
Course is: B-Tech
Year of joining is: 2020






**********INPUT**********
Specify the number of students whose data is to be input.
3

Input details of student 1.

Input Roll Number: 56
Input Name: Donald Wren
Input Department: Psychology
Input Course: Psychology Honours
Input Year of Joining: 2019

Input details of student 2.

Input Roll Number: 78
Input Name: Juli Malik
Input Department: Civil Engineering
Input Course: B-Tech
Input Year of Joining: 2021

Input details of student 3.

Input Roll Number: 9
Input Name: Hitashi Ken
Input Department: Computer Science
Input Course: B-Tech
Input Year of Joining: 2022

**********OUTPUT**********
Input the year for which all the new joined students are to be printed.
2023

Students that joined in the year 2023 are:
No students.

Input Roll Number of the student whose details are to be printed.
7

No details of student with Roll No. 7 are present.
*/
