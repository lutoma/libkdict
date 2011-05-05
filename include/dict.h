#pragma once

#ifdef XELIX
	#include <lib/generic.h>
#endif

struct _dict;

typedef struct {
        char* key;
        void* value;
        void* next;
		struct _dict* parent;
} entry_t;

typedef struct _dict
{
	entry_t* firstEntry;
	entry_t* lastEntry;
} dict_t;

void* dict_get(dict_t* dict, void* key);
void dict_set(dict_t* dict, void* key, void* value);
dict_t* dict_new();
void dict_del(dict_t* dict, void* key);
void dict_clear(dict_t* dict);
void dict_destroy(dict_t* dict);
