#include <stdio.h>
#include <sys/types.h>

int main (void)
{
	if (sizeof(ino_t) == sizeof(long))
		return 0;
	fprintf(stderr, "*** 'ino_t' size is %zu, expected %zu\n"
			"*** Please report this to the Debian Apache maintainers\n",
		sizeof(ino_t), sizeof(long));
	return 1;
}
