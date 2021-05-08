#include <stdio.h>

int main(void) {
	printf ("%s\n", "My String");
	printf ("%2.3f\n",1.34567);
	// printf("Data: %*.*s Other info: %d\n", minlen, maxlen, string, info);
	printf ("%6s %6s %6s \n","True","False","True");
	printf ("%*.*f\n",1,2,0.3456);
	char x = 1;
	printf ("%s\n", x ? "True":"False");
}
