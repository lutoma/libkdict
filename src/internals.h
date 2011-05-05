// Compatibility for embedding in Xelix kernel
#ifndef XELIX
        #include <stdint.h>
        #include <stdio.h>
        #include <malloc.h>

        #define _debug printf
#else /* !XELIX */
        #include <lib/generic.h>
        #include <memory/kmalloc.h>
        #include <lib/string.h>
        #include <lib/log.h>

        #define malloc kmalloc
        #define free kfree
        #define _debug log
#endif /* !XELIX */

#ifdef DEBUGMODE
        #define debug(args...) _debug("libdict: debug: " args)
#else
        #define debug(...)
#endif /* DEBUGMODE */

entry_t* _findEntry(dict_t* dict, char* name);
void _deleteEntry(entry_t* entry);
