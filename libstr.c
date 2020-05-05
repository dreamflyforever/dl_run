#include <stdio.h>
#include <string.h>

int _strlen(char *str)
{
	int len;
	if (str == NULL) {
		printf("str == NULL\n");
		len = 0;
		goto err;
	}
	/*printf("[%s %d]\n", __func__, __LINE__);*/
	len = strlen(str);
	/*printf("[str len} : [%s %d]\n", str, len);*/
err:
	return len;
}
