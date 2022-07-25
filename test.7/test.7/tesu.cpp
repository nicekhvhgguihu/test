#include "tesu.h"

int* dlive(int arr[50],const int sz)
{
	int size = sizeof(*(&arr)) / sizeof((*arr));
	assert(0<sz&&sz<50);
	int* p = &arr[sz];
	int* d = &arr[sz+1];
	while (*p++ = *d++, (*d) < arr[size-1])
	{

	}
	*p = *d;
	arr[size-1] = NULL;

	return arr;
	
}