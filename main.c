#include "fetchSource.h"

/* test our html source fetcher */
int main() {
	printf("%s\n\n", fetchSource("gcc.gnu.org", "/bugs/segfault.html"));
}
