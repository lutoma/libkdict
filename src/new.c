#include <dict.h>
#include "internals.h"

dict_t* dict_new()
{
	dict_t* dict = (dict_t*)malloc(sizeof(dict_t));
	memset(dict, 0, sizeof(dict_t));

	return dict;
}
