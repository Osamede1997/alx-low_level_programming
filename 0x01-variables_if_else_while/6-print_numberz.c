#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
int n;
for (n = 0; n < 10; ++n)
{
write(1, n, sizeof(n));
}
putchar("\n");
return (0);
}
