#include <stdio.h>
#include <stdint.h>
#include <malloc.h>

#include <dict.h>

int main()
{
	// Create a new dictionary...
	dict_t* dictionary = dict_new();

	// Store something in the dictionary...
	dict_set(dictionary, "testkey", "Hello World!");
	dict_set(dictionary, "test2", "Hello World, the second one!");

	// ... and retreive it.
	printf("%s\n", (char*)dict_get(dictionary, "test2"));
	printf("%s\n", (char*)dict_get(dictionary, "testkey"));

	// Delete a single entry
	dict_del(dictionary, "test2");

	// Cleanup
	dict_destroy(dictionary);
}
