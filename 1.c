#include <stdio.h>

int main()
{
unsigned n,m;
do
{
printf("Введите n: ");
scanf("%d", &n);
} while(!n);
do
{
printf("Введите m: ");
scanf("%d", &m);
} while(!m);
int A[n][m];
int min1,min2,min3; /* Три самих менших значень */
min1=min2=min3 = 1024; /* Вкажіть максимальне значення */
for(int x = 0; x < n; x++)
{
for(int y = 0; y < m; y++)
{
printf("Введите значение A[%d][%d]: ",x,y);
scanf("%d", &A[x][y]);
/* Шукаємо мінімальне значення */
if(min1 > A[x][y])
{
min1 = A[x][y];
if(min2 > min1)
{
int tmp = min2;
min2 = min1;
min1 = tmp;
if(min3 > min2)
{
int tmp2 = min3;
min3 = min2;
min2 = tmp2;
}
}
}
}
}
/* Міняємо значення в матриці */
for(int x = 0; x < n; x++)
{
for(int y = 0; y < m; y++)
{
if(A[x][y] == min1 || A[x][y] == min2 || A[x][y] == min3)
{
A[x][y] = 1;
}
}
}
/* Вивід матриці */
for(int x = 0; x < n; x++)
{
for(int y = 0; y < m; y++)
{
printf("%d\t", A[x][y]);
}
putchar('\n');
}

return 0;
}