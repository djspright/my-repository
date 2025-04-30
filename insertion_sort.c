#include <stdio.h>

#define MAX_LENGTH 5

void  showData(int *array, int length)
{
  int i;

  i = 0;
  while(i < length)
  {
    printf("%d", array[i]);
    i++;
  }
  printf("\n");
}

void main()
{
  int array[MAX_LENGTH] = { 5, 2, 3, 1, 4};
  int i;
  int j;
  int tmp;

  i = 1;
  while(i < MAX_LENGTH)
  {
    showData(array, MAX_LENGTH);
    j = i;
    while(j >= 1 && array[j -1] < array[j])
    {
      tmp = array[j];
      array[j] = array[j - 1];
      array[j - 1] = tmp;
      j--;
      showData(array, MAX_LENGTH);
    }
    i++;
  }
  showData(array, MAX_LENGTH);
}


