#include "ft_printf.h"

int main() {

    int i = ft_printf("%i, %%, %c, %s,  %d, %u\n", -2147483648, 'c', "str", 42, -42);
    int j = printf("%i, %%, %c, %s,  %d, %u\n", -2147483648, 'c', "str", 42, -42);
    printf("%d, %d\n", i, j);
    return 0;
}
