1)  #include <stdio.h>
int main()
{
    printf("Hello world");
    return 0;
}
OUT PUT;
Hello world


2)#include <stdio.h>
int main()
{
    int num;
    printf("enter number:",num);
    scanf("%d",& num);
    if(num==0)
    printf("neither positive or nerative");
    else if (num>0)
    printf("positive");
    return 0;
}
OUT PUT 
 enter number:10
positive8
dash: 2: 8: not found


3)#include <stdio.h>
int main()
{
int sum=0,rem;
int num, rec;
printf("enter number;");
scanf("%d",&num);
rec = recfunction(num);
printf("the nummber after reverse ;%d",rec);
  return 0;
  }
  recfunction(int num)
  {
  if(num)
  {
 sum=num%10;
 sum=sum*10+rem;
 rec(num/10);
  }
  else
  return sum;
  }
4}#include<stdio.h>
int main()
{
    int count, first_term = 0, second_term = 1, next_term, i; 
    printf("Enter the number of terms:\n");
    scanf("%d",&count);
    printf("First %d terms of Fibonacci series:\n",count);
    for ( i = 0 ; i < count ; i++ )
    {
       if ( i <= 1 )
          next_term = i;
       else
       {
          next_term = first_term + second_term;
          first_term = second_term;
          second_term = next_term;
       }
       printf("%d\n",next_term);
    }
    return 0;
}
OUT PUT
Enter the number of terms:
 1
 1
First 1 terms of Fibonacci series:
0
2
dash: 2: 2: not found
2
dash: 3: 2: not found
3
dash: 4: 3: not found
5}
#include<stdio.h>
int main()
{
   int num, fact;
   printf("\nEnter any integer number:");
   scanf("%d",&num);
   fact =find_factorial(num);
   printf("\nfactorial of %d is: %d",num, fact);
   return 0;
}
int find_factorial(int n)
{
   if(n==0)
      return(1);
   return(n*find_factorial(n-1));
}
Output:

Enter any integer number: 4
factorial of 4 is: 24

6}
#include <stdio.h>
int main()
{
    int y;

    printf("Enter year: ");
    scanf("%d",&y);

    if(y % 4 == 0)
    {
        if( y % 100 == 0)
        {
            if ( y % 400 == 0)
                printf("%d is a Leap Year", y);
            else
                printf("%d is not a Leap Year", y);
        }
        else
            printf("%d is a Leap Year", y );
    }
    else
        printf("%d is not a Leap Year", y);

    return 0;
}
out put:
Enter year: 2004
2004 is a Leap Year

7}
include <stdio.h>
int main() {
  int number;
  printf("Enter an integer: ");
  scanf("%d", &number);
  printf("Integer entered by user: %d", number);

  return 0;
}
OUT PUT:
enter an integer: 9
Integer entered by user: 97
dash: 2: 7: not found
8}
#include <stdio.h>
 int main()
{
    int i, max_element;
    max_element = arr[0];
    for (i = 1; i < num; i++)         
        if (arr[i] > max_element)
            max_element = array;
    return max_element;
}
 
int main()
{
    int arr[] = {1, 24, 145, 20, 8, -101, 300};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Largest element of array is %d", largest_element(arr, n));
    return 0;
}
Output:
Largest element of array is 300
100
dash: 3: 100: not found
9} #include <stdio.h>
void swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}

int main()
{
    int num1,num2;
    printf("Enter value of num1: ");
    scanf("%d",&num1);
    printf("Enter value of num2: ");
    scanf("%d",&num2);
    printf("Before Swapping: num1 is: %d, num2 is: %d\n",num1,num2);
    swap(&num1,&num2);
    printf("After  Swapping: num1 is: %d, num2 is: %d\n",num1,num2);
    return 0;
}
OUT PUT:
Enter value of num1: 9
Enter value of num2: 4
Before Swapping: num1 is: 9, num2 is: 4
After  Swapping: num1 is: 4, num2 is: 9

10}
#include <stdio.h>
void sort_numbers_ascending(int number[], int count)
{
   int temp, i, j, k;
   for (j = 0; j < count; ++j)
   {
      for (k = j + 1; k < count; ++k)
      {
         if (number[j] > number[k])
         {
            temp = number[j];
            number[j] = number[k];
            number[k] = temp;
         }
      }
   }
   printf("Numbers in ascending order:\n");
   for (i = 0; i < count; ++i)
      printf("%d\n", number[i]);
}
void main()
{
   int i, count, number[20];
   printf("How many numbers you are gonna enter:");
   scanf("%d", &count);
   printf("\nEnter the numbers one by one:");
   for (i = 0; i < count; ++i)
      scanf("%d", &number[i]);
   sort_numbers_ascending(number, count);
}
Output:

How many numbers you are gonna enter:4
Enter the numbers one by one:4
5
8
9
Numbers in ascending order:
4
5
8
9

11}#include <stdio.h>Error! File does not exist.1000
dash: 2: 1000: not found
int main() {
  char ch[1000];
  FILE *fptr;
  if ((fptr = fopen("beginnersbook.txt", "r")) == NULL)
 {
    printf("Error! File does not exist.");
    exit(1);
  }
  fscanf(fptr, "%[^\n]", ch);
  printf("Data from the file:\n%s", ch);
  fclose(fptr);
  return 0;
} 
OUT PUT;
Error! File does not exist.1000
dash: 2: 1000: not found

12}
#include <stdio.h>
int main()
{
  float Pi=3.14, area, circumference, radius;
  printf("Enter radius of circle: ");
  scanf("%f",&radius);
  area = Pi * radius * radius;
  printf("Area of circle is: %f\n",area);
  circumference = 2 * Pi * radius;
  printf("Circumference of circle is: %f",circumference);
  return 0;
}
OUT PUT:
Enter radius of circle: 2
Area of circle is: 12.560000
Circumference of circle is: 12.560000


13}#include <stdio.h>

int main() {

  int n, reverse = 0, remainder;

  printf("Enter an integer: ");
  scanf("%d", &n);

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("Reversed number = %d", reverse);

  return 0;
}
OUT PUT;
Enter an integer: 2
Reversed number = 2


14}#include <stdio.h>

int main() {

  int n, i, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) 
{
    if (n % i == 0) 
{
      flag = 1;
      break;
    }
  }

  if (flag == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);

  return 0;
}
OUT PUT
Enter a positive integer: 53
53 is a prime number.
15}#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
printf("G.C.D of %d and %d is %d", n1, n2, gcd);
retuen 0;
}

OUT PUT;
Enter two integers: 52
3
G.C.D of 52 and 3 is 1
16}#include<stdio.h>  
int main()   
    {   
        float P , R , T , SI ;  
       P =34000; R =30;  T = 5;  
        SI  = (P*R*T)/100;   
        printf("\n\n Simple Interest is : %f", SI);  
        return (0);  
    } 
OUT PUT;
 Simple Interest is : 51000.0000008
dash: 2: 8: not found
17}
#include <stdio.h>

int main()
{
    char ch;

    /* Input character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);


    if(ch >= 'A' && ch <= 'Z')
    {
        printf("'%c' is uppercase alphabet.", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("'%c' is lowercase alphabet.", ch);
    }
    else
    {
        printf("'%c' is not an alphabet.", ch);
    }

    return 0;
}
0UT PUT;
Enter any character: 4
'4' is not an alphabet.3
dash: 2: 3: not found
18}
include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    
    return 0;
}
0UT PUT;
Enter an integer: 8
8 is even.7

19}
#include <stdio.h>

int main() {

    int n1, n2, max;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // maximum number between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if ((max % n1 == 0) && (max % n2 == 0)) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
0UT PUT;
Enter two positive integers: 6
6
6
The LCM of 6 and 6 is 6.6


20}
#include <stdio.h>
int main() {
    int n, i;
    float num[100], sum = 0.0, avg;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("Average = %.2f", avg);
    return 0;
0UT PUT
Enter the numbers of elements: 4
1. Enter number: 4
2. Enter number: 4
3. Enter number: 3
4. Enter number: 3
Average = 3.755

21}#include <stdio.h>
int main() {
  int r, c, a[100][100], b[100][100], sum[100][100], i, j;
  printf("Enter the number of rows (between 1 and 100): ");
  scanf("%d", &r);
  printf("Enter the number of columns (between 1 and 100): ");
  scanf("%d", &c);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  // printing the result
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }

  return 0;
}
Output;

Enter the number of rows (between 1 and 100): 2
Enter the number of columns (between 1 and 100): 3

Enter elements of 1st matrix:
Enter element a11: 2
Enter element a12: 3
Enter element a13: 4
Enter element a21: 5
Enter element a22: 2
Enter element a23: 3
Enter elements of 2nd matrix:
Enter element b11: -4
Enter element b12: 5
Enter element b13: 3
Enter element b21: 5
Enter element b22: 6
Enter element b23: 3


22}#include <stdio.h>
int main() {
  int n;
  double arr[100];
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }

  // storing the largest number to arr[0]
  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("Largest element = %.2lf", arr[0]);

  return 0;
}
Output

Enter the number of elements (1 to 100): 5
Enter number1: 34.5
Enter number2: 2.4
Enter number3: -35.5
Enter number4: 38.7
Enter number5: 24.5
Largest element = 38.70

23}include <stdio.h>
const int CITY = 2;
const int WEEK = 7;
int main()
{
  int temperature[CITY][WEEK];
  for (int i = 0; i < CITY; ++i)
  {
    for (int j = 0; j < WEEK; ++j)
    {
      printf("City %d, Day %d: ", i + 1, j + 1);
      scanf("%d", &temperature[i][j]);
    }
  }
  printf("\nDisplaying values: \n\n");
  for (int i = 0; i < CITY; ++i)
  {
    for (int j = 0; j < WEEK; ++j)
    {
      printf("City %d, Day %d = %d\n", i + 1, j + 1, temperature[i][j]);
    }
  }
  return 0;
}


24.#include <stdio.h>
int main()
{
float P , R , T;
printf("Enter p,r, and t values \n");
scanf("%f %f %f",&P,&R,&T);
float SI = (P * T * R) / 100;
printf("Simple Interest = %f\n", SI);
return 0;
}


25.#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z')
    {
    printf("'%c' is uppercase.", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
    printf("'%c' is lowercase.", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
    printf("'%c' is a digit.", ch);
    }
    else
    {
    printf("'%c' is a special case.", ch);
    }
    return 0;
}


26.#include<stdio.h>
int main()
{
  int number;
  printf(" Enter an int value to check  \n");
  scanf("%d", &number);
  if ( number%2 == 0 ) 
  printf("Given number %d is EVEN NUMBER \n", number);
  else
  printf("Given number %d is ODD NUMBER \n", number);
  return 0;
}

output
Enter an int value to check Even or Odd 
98
Given number 98 is EVEN NUMBER 



27.#include <stdio.h>
int main(){
    int i, n;
    float num[25], sum = 0.0, average;
    printf("Enter total no. of elements: ");
    scanf("%d", &n);
    while (n > 25 || n < 1){
    printf("Please enter number in the range of 1 to 25");
    scanf("%d", &n);
    }
    for (i = 0; i < n; ++i){
    printf("%d. Enter a number: ", i + 1);
    scanf("%f", &num[i]);
    sum = sum + num[i];
    }
    average = sum / n;
    printf("Average: %.2f", average);
    return 0;
}

OUTPUT

Enter total no. of elements: 5
1. Enter a number: 7
2. Enter a number: 9
3. Enter a number: 5
4. Enter a number: 18
5. Enter a number: 15
Average: 10.80



28.#include <stdio.h>
int main() {
  int n;
  double arr[100];
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) 
{
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }
  for (int i = 1; i < n; ++i) 
{
    if (arr[0] < arr[i]) 
{
      arr[0] = arr[i];
    }
  }
  printf("Largest element = %.2lf", arr[0]);
  return 0;
}


OUTPUT

Enter the number of elements (1 to 100): 5
Enter number1: 34.5
Enter number2: 2.4
Enter number3: -35.5
Enter number4: 38.7
Enter number5: 24.5
Largest element = 38.70



29.#include <stdio.h>
int main() {
  int r, c, a[10][10], b[10][10], sum[10][10], i, j;
  printf("Enter the number of rows : ");
  scanf("%d", &r);
  printf("Enter the number of columns: ");
  scanf("%d", &c);
  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
  for (j = 0; j < c; ++j) {
  printf("Enter element a %d %d: ", i + 1, j + 1);
  scanf("%d", &a[i][j]);
  }
  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
  for (j = 0; j < c; ++j) {
  printf("Enter element b %d %d: ", i + 1, j + 1);
  scanf("%d", &b[i][j]);
  }
  for (i = 0; i < r; ++i)
  for (j = 0; j < c; ++j) {
  sum[i][j] = a[i][j] + b[i][j];
  }
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
  for (j = 0; j < c; ++j) {
  printf("%d   ", sum[i][j]);
  if (j == c - 1) {
  printf("\n\n");
  }
  }
  return 0;
}


OUTPUT

Enter the number of rows (between 1 and 100): 2
Enter the number of columns (between 1 and 100): 3

Enter elements of 1st matrix:

Enter element a11: 2
Enter element a12: 3
Enter element a13: 4
Enter element a21: 5
Enter element a22: 2
Enter element a23: 3

Enter elements of 2nd matrix:

Enter element b11: -4
Enter element b12: 5
Enter element b13: 3
Enter element b21: 5
Enter element b22: 6
Enter element b23: 3

Sum of two matrices: 
-2   8   7   

10   8   6  




30.#include <stdio.h>
int main()
{
int C[10][10], A[10][10], B[10][10], i, j, l, row, col;
printf("Enter the number of rows (1-5): ");
scanf("%d", &row);
printf("Enter the number of columns (1-5): ");
scanf("%d", &col);
printf("\n Matrix A \n");
printf("\n Enter element you want to insert in the matrix A: \n");
for (i = 0; i < row; i++)
{
for (j = 0; j < col; j++)
{
printf("\t");
scanf("%d", &A[i][j]);
}
}
printf("\n Matrix A:\n");
for (i = 0; i < row; i++)
{
for (j = 0; j < col; j++)
{
printf("%d", A[i][j]);
printf("\t");
}
printf("\n");
}
printf("\n\n Matrix B");
printf("\n Enter element you want to insert in the matrix B:\n");
for (i = 0; i < row; i++)
{
for (j = 0; j < col; j++)
{
printf("\t");
scanf("%d", &B[i][j]);
}
}
printf("\n Matrix B:\n");
for (i = 0; i < row; i++)
{
for (j = 0; j < col; j++)
{
printf("%d", B[i][j]);
printf("\t");
}
printf("\n");
}
printf("\n A*B=\n");
for (i = 0; i < row; i++)
{
for (j = 0; j < row; j++)
{
C[i][j] = 0;
for (l = 0; l < col; l++)
{
C[i][j] = C[i][j] + A[i][l] * B[l][j];
}
printf("%d", C[i][j]);
printf("\t");
}
printf("\n");
}
return 0;
}


OUTPUT

Enter the number of rows (1-5): 2
Enter the number of columns (1-5): 2
Matrix A
Enter element you want to insert in the matrix A:
1
2
3
4
Matrix A:
1 2
3 4

Matrix B:
Enter element you want to insert in the matrix B:
5
6
7
8
Matrix B:
5 6
7 8
A*B=
19 22
43 50









