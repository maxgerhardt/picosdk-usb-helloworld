#include <stdio.h>
#include "pico/stdlib.h"

int main(void)
{
    stdio_init_all();
    int i = 0;
    while(true) {
        printf("Hello World %d\n", i++);
        sleep_ms(250);
    }
}