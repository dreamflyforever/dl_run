#include <stdio.h>
#include <dlfcn.h>

int main(void)
{
	const char *src = "Hello Dymatic";
	int (*pStrLen)(const char *);
	void *pHandle = NULL;
	char *pErr = NULL;

	pHandle = dlopen("./libstr.so", RTLD_LAZY);
	pErr = dlerror();
	if(!pHandle || pErr != NULL) {
		printf("Failed load library!\n%s\n", pErr);
		return -1;
	}

	pStrLen = dlsym(pHandle, "_strlen");
	if (!pStrLen) {
		printf("%s\n", pErr);
		return -1;
	}
	printf("The string length is:%d\n", pStrLen(src));
	dlclose(pHandle);
	return 0;
}
