// This is an extended version of simple.c.

#include <stdio.h>
#include <stdint.h>
#include <malloc.h>

#include <dict.h>

int main()
{
	// Create a new dictionary...
	dict_t* dictionary = dict_new(false);

	// Store something in the dictionary...
	dict_set(dictionary, "testkey", "Hello World!");
	dict_set(dictionary, "test2", "Hello World, the second one!");

	// ... and retrieve it.
	printf("%s\n", (char*)dict_get(dictionary, "test2"));
	printf("%s\n", (char*)dict_get(dictionary, "testkey"));

	// Delete a single entry
	dict_del(dictionary, "test2");

	/* You can for sure not only store strings in a dictionary. Every
	 * pointer / integer is good.
	 */
	 
	// Store a dictionary in the dictionary
	dict_set(dictionary, "thedict", dict_new(true));
	
	// Store something in the dictionary in the dictionary
	dict_set(dict_get(dictionary, "thedict"), "anothertest", "ohai");

	// ... and retrieve it.
	printf("%s\n", (char*)dict_get(dict_get(dictionary, "thedict"), "anothertest"));

	/* By the way, you can also use every pointer / integer as a key, as
	 * long as it's unsigned (The same limitation also applies for the
	 * value, so you can't directly store a signed integer, you'll have
	 * to store a pointer to it).
	 */
	
	// Cleanup
	dict_destroy(dict_get(dictionary, "thedict"));
	dict_destroy(dictionary);
}
