//--- strlen‚ÌŽÀŒ»—á‚` ---//

#include <cstddef>

size_t strlen(const char* s)
{
	size_t len = 0;		// ’·‚³

	while (*s++)
		len++;
	return len;
}
