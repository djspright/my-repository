#include <inttypes.h>
#include <stdio.h>

#define MAX_LENGTH  5

void showData(int *array, int length)
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
  int array[MAX_LENGTH] = {5, 2, 3, 1, 4};
  int i;
  int j;
  int tmp;
  int max_index;

  i = 0;
  while(i < MAX_LENGTH - 1)
  {
    showData(array, MAX_LENGTH);
    max_index = i;
    j = i + 1;
    while(j < MAX_LENGTH)
    {
      if(array[max_index] < array[j])
        max_index = j;
      if(max_index != i)
      {
        tmp = array[i];
        array[i] = array[max_index];
        array[max_index] = tmp;
      }
      j++;
    }
    i++;
  }showData(array, MAX_LENGTH);
}
