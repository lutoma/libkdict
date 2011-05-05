#include <dict.h>
#include "internals.h"

dict_t* dict_new()
{
	dict_t* dict = (dict_t*)malloc(sizeof(dict_t));
	dict->firstEntry = NULL;

	return dict;
}
