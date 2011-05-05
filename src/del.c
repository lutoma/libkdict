#include <dict.h>
#include "internals.h"

void dict_del(dict_t* dict, void* key)
{
	_deleteEntry(_findEntry(dict, key));
}
