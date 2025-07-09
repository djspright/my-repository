#include <stdio.h>

#define MAX_LENGTH 100

typedef struct
{
	int	array[MAX_LENGTH];
	int	current;
}		STACK;

void	init(STACK *pStack)
{
	int	i;

	i = 0;
	while (i < MAX_LENGTH)
	{
		pStack->array[i] = 0;
		i++;
	}
	pStack->current = 0;
}

int	push(STACK *pStack, int value)
{
	if (pStack->current < MAX_LENGTH)
	{
		pStack->array[pStack->current] = value;
		pStack->current++;
		return (1);
	}
	return (0);
}

int	pop(STACK *pStack, int *pValue)
{
	if (pStack->current > 0)
	{
		pStack->current--;
		*pValue = pStack->array[pStack->current];
		return (1);
	}
	return (0);
}

void	main(void)
{
	STACK	s;
	int		value;

	init(&s);
	push(&s, 1);
	push(&s, 2);
	push(&s, 3);
	while (pop(&s, &value))
		printf("%d", value);
	printf("\n");
}
