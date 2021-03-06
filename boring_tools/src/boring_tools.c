
#include <stdio.h>
#include <string.h>

#include "boring_tools.h"

#define BITWISE_KEY     0x80    /* binary: 10000000 */

void show_fake_bits(const void *p_value, uint32_t value_len, bool order)
{
    const uint8_t *p_refer = (const uint8_t*)p_value;

    uint8_t fake_byte = 0;

    if (false == order) {
        goto reverse_order;
    }
    for (uint32_t i = 0; i < value_len; i++)
    {
        fake_byte = p_refer[i];

        for(int j = 0; j < 8; j++)
        {
            putchar(fake_byte & BITWISE_KEY ? '1' : '0');
            fake_byte = (uint8_t)(fake_byte << 1);
        }
        putchar(' ');
    }
    printf("\n");
    return;

reverse_order:
    for (int i = (int)value_len - 1; i >= 0; i--)
    {
        fake_byte = p_refer[i];

        for(int j = 0; j < 8; j++)
        {
            putchar(fake_byte & BITWISE_KEY ? '1' : '0');
            fake_byte = (uint8_t)(fake_byte << 1);
        }
        putchar(' ');
    }
    printf("\n");
}

const char *format_flot_result(double num)
{
    static char res[1024] = { 0 };
    res[0] = '\0';

    snprintf(res, sizeof(res), "%f", num);

    int i = (int)strlen(res); /* the length will be greater than zero. */

    while (--i && ('0' == res[i] || '.' == res[i]))
    {
        res[i] = '\0';
    }
    return res;
}

