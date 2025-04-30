#include <stdio.h>

#define MAX_LENGTH 100

typedef struct{
  int array[MAX_LENGTH];
  int first;
  int last;
} QUEUE;

void init(QUEUE *);
int enqueue(QUEUE *, int);
int deqeue(QUEUE *, int *);

void main()
{
  QUEUE q;
  int value;
  init(&q);
  enqueue(&q, 1);
  enqueue(&q, 2);
  enqueue(&q, 3);
  while(deqeue(&q, &value))
    printf("%d", value);
  printf("\n");
}

void  init(QUEUE * pQueue)
{
  int i;

  i = 0;
  while(i < MAX_LENGTH)
  {
    pQueue->first = 0;
    pQueue->last = 0;
    i++;
  }
}

int enqueue(QUEUE * pQueue, int value)
{
  if((pQueue->last + 1) % MAX_LENGTH == pQueue->first)
    return 0;
  pQueue -> array[pQueue->last] = value;
  pQueue->last = (pQueue->last + 1) % MAX_LENGTH;
  return 1;
}

int dequeue(QUEUE* pQueue, int *pValue)
{
  if(pQueue->first == pQueue->last)
    return 0;
  *pValue = pQueue->array[pQueue->first];
  pQueue->first = (pQueue->first + 1) % MAX_LENGTH;
  return 1;
}
