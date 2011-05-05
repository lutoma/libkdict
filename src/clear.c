#include <dict.h>
#include "internals.h"

void dict_clear(dict_t* dict)
{
	entry_t* currentEntry = dict->firstEntry;
	entry_t* tmp;

	while(currentEntry != NULL)
	{
		debug("Deleting entry 0x%x\n", (uint32_t)currentEntry->key);
		tmp = currentEntry->next;
		_deleteEntry(currentEntry);
		currentEntry = tmp;
	}
}
