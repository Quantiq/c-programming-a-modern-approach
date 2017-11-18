### 1.

##### (a) output:
```
    86,1040
```

##### (b) output:
```
 3.02530e+01
```

##### (c) output:
```
83.1620
```
##### (d) output:
```
1e-06
```

### 2.
##### (a)
```C
printf("%-8.1e", x);
```

##### (b)
```C
printf("%10.6e", x);
```

##### (c)
```C
printf("%-8.3f", x);
```
##### (a)
```C
printf("%6.0f", x);
```

### 3.
##### (a)

"%d" vs. " %d" - Equivalent. White-space in the format string matches **any** number of white-space characters in the input string, including none.

##### (b)
"%d-%d-%d" vs. "%d -%d -%d" - Not equivalent. Calls to scanf which contain white-space characters in-between '%d' will attempt to match white-space characters with '-' and result in erroneous output for "%d-%d-%d". However, correct output will be shown for "%d -%d -%d" as input white-space characters will match with the white-space in the format string.

##### (c)
"%f" vs. "%f " - Not equivalent, but they both capture the same values. Both inputs capture a single float but "%f " requires the user to input one or more white-space characters following the float input or it will continue prompting the user until they do so.

It's worth noting that the white-space character entered by the user for "%f " isn't stored in the actual float variable.

##### (d)
"%f,%f" vs. "%f, %f" - Equivalent. White-space in the format string matches **any** number of white-space characters in the input string, including none.

### 4.

i = 10, x = .3, j = 5

### 5.

x = 12.3, i = 45, y = .6

### 6.

```C
#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter first fraction: ");
    scanf("%d /%d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d /%d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
```
