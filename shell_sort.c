#include <stdio.h>

#define MAX_LENGTH 8

void  showData(int *array, int length)
{
  int i;

  i = 0;
  while(i < length)
  {
    printf("%d ", array[i]);
    i++;
  }
  printf("\n");
}

void  main()
{
  int array[MAX_LENGTH] = { 41, 23, 55, 36, 14, 32, 59, 90};
  int i;
  int j;
  int step;
  int tmp;

  step = MAX_LENGTH / 2;
  while(step > 0)
  {
    showData(array, MAX_LENGTH);
    i = 0;
    while(i < MAX_LENGTH)
    {
      j = i;
      tmp = array[i];
      while(j >= step && array[j - step] < tmp)
      {
        array[j] = array[j - step];
        j -= step;
      }
      array[j] = tmp;
      i++;
    }
    step /= 2;
  }
  showData(array, MAX_LENGTH);
}


