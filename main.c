
#include "main.h"


int main(void)
{
	int len;

	len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0 );

	len =  _printf("%K\n");

	_print_int(len);
	return (0);
}
