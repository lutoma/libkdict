#include <dict.h>
#include "internals.h"

// Get value of an entry. Returns -1 if there's no such entry.
void* dict_get(dict_t* dict, void* key)
{
	entry_t* entry = _findEntry(dict, key);
	if(entry == NULL)
		return (void*)-1;
	
	return entry->value;
}
