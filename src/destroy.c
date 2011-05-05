#include <dict.h>
#include "internals.h"

void dict_destroy(dict_t* dict)
{
	dict_clear(dict);
	free(dict);
}
