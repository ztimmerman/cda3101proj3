#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {
	int block_size = -3;
	int set_num = -2;
	int assoc = -1;

/* If argc < 6, there are not the three flags and three
 * parameters, the program doesn't work, so return 1.
 */
	if (argc < 6)
		return 1;


	//note: must be typed like this, '-s', not this, '–s'
	for (int i = 1; i < argc; i++)
	{
		if (strcmp(argv[i], "-b") == 0)
		{
			block_size = atoi(argv[i+1]);
		}
		if (strcmp(argv[i], "-s") == 0)
		{
			set_num = atoi(argv[i+1]);
		}
		if (strcmp(argv[i], "-n") == 0)
		{
			assoc = atoi(argv[i+1]);
		}
	}

	printf("block_size: %d\nset_num: %d\nassoc: %d\n", block_size, set_num, assoc);
}
