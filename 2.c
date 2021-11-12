#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define RAND(min, max) (rand() % ((max) - (min)) + (min))
#define BUFFER 8
int main(void) {
int matrix[BUFFER][BUFFER] = { 0 } ;
int i, j, min_i, min_j;
srand((unsigned)time(NULL));
for (i = 0; i < BUFFER; ++i) {
for (j = 0; j < BUFFER; ++j) {
matrix[i][j] = RAND(-100, 101);
}
}
for (i = 0; i < BUFFER; ++i) {
for (j = 0; j < BUFFER; ++j) {
printf("%5i", matrix[i][j]);
}
puts("\n");
}
puts("");
min_i = min_j = 0;
for (i = 0; i < BUFFER - 1; ++i) {
for (j = 0; j < BUFFER - i - 1; ++j) {
if (matrix[i][j] < matrix[min_i][min_j]) {
min_i = i;
min_j = j;
}
}
}
printf(" min = %i, i = %i, j = %i\n", matrix[min_i][min_j], min_i, min_j);
system("pause > nul");
return 0;
}
