/**
 * calloc - clear allocation
 * calloc() function is used to dynamically allocate multiple blocks of memory.
 *
 * it is different from malloc in two ways:
 * 	1. calloc() need two arguments instead of just one
 * 		syntax: void *calloc(size_t n, size_t size);
 * 		where: n is number of blocks 
 * 			size is size of each block
 *
 * 	 	eg.
 * 	 	int *ptr = (int *)calloc(10, sizeof(int));
 *
 * 	 	an equivalent malloc call:
 * 	 		int *ptr = (int *)malloc(10*sizeof(int));
 *
 * 	 2. Memory allocated by calloc is initialized to zero.
 * 	    while memory allocated by malloc is initialized with some garbage value
 */
