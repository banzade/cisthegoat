#include <stdio.h>
/* prints its input one word per line Ex1-12 */

#define IN 1
#define OUT 0

main() {
	int c;
	int state;
	
	while ((c = getchar()) != EOF) {
		if ( c == ' ' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			putchar('\n');
			putchar(c);
		}
		else
			putchar(c);
	}
}
