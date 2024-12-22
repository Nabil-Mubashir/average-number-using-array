#include<stdio.h>
int main (){
int array[100], sum=0, number, average;

printf("Enter the size of array : ");
scanf("%d", &number);

for (int i=0; i<number ; i++) {
    printf("Enter %d number : ", i+1);
    scanf("%d", &array[i]);
    sum += array[i] ;
}
average = sum / number ;
printf("\nAverage number : %d\n", average);

return 0;
}
