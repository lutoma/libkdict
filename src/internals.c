#include <dict.h>
#include "internals.h"

// Find an entry. Returns NULL if there's no such entry.
entry_t* _findEntry(dict_t* dict, char* key)
{
	entry_t* entry = dict->firstEntry;
	while(entry != NULL)
	{
		if(entry->key == key)
			break;
	
		entry = entry->next;
	}
	
	return entry;
}

// Delete an entry. Stub so far.
void _deleteEntry(entry_t* entry)
{
	if(entry == NULL)
		return;
}
