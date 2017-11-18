### 1.

Depending on the compiler, 'return 0;' needs to be added to remove the compiler error.

```C
	#include <stdio.h>

	int main(void)
	{
		printf("hello, world\n");
		return 0;
	}
```

### 2.

##### (a)

Directives:

	- #Include <stdio.h>

Statements:

	- printf("Parkinson's Law:\nWork expands so as to ");
	- printf("fill the time\n");
	- printf("available for its completion.\n");
	- return 0;

##### (b)

Output:

	Parkinson's Law:
	Work expands so as to fill the time
	available for its completion.

### 3.

```C
/* Computes the dimensional weight of a 12" x 10" x 8" box */

#include <stdio.h>

int main(void)
{
	int height = 8, length = 12, width = 10;

	volume = height * length * width;

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

	return 0;
}
```

### 4.

```C
#include <stdio.h>

int main(void)
{
    int a, b, c;
    float d, e, f;

    printf("1. %d\n2. %d\n3. %d\n", a, b, c);
    printf("1. %f\n2. %f\n3. %f\n", d, e, f);

    return 0;
}
```

### 5.

(a) is not a legal C identifier because it begins with a digit.

### 6.

Adding more than one adjacent underscore to an identifier can make it difficult to discern the number of underscores it contains.

### 7.

'for' and 'while' are keywords in C. 'printf' is a standard library function part of stdio.h. 'main' is a user defined function. 'If' is not a keyword since it contains a capital letter.

### 8.

There are 14 tokens in the statement.

	1. a
	2. n
	3. s
	4. w
	5. e
	6. r
	7. =
	8. (
	9. *
	10. -
	11. *
	12. )
	13. /
	14. ;

### 9.

```C
answer = (3 * q - p * p) / 3;
```

### 10.

There are 3 essential spaces in the dweight.c program.

- The space between int and main(void).
- The space between int and height.
- The space between return and 0.
