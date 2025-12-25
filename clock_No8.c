#include <stdio.h>

int main() {
    int h, m, s;
    int add_min;

    scanf("%d:%d:%d", &h, &m, &s);
    printf("Hour:%d\nMinute:%d\nsecond:%d\n", h, m, s);

    scanf("%d", &add_min);
    printf("Next minutes: %d\n", add_min);

    m = m + add_min;

    if (m >= 60) {
        h = h + (m / 60); 
        m = m % 60;       
    }

    if (h >= 24) {
        h = h % 24; 
    }

    printf("Hour:%d\nMinute:%d\nsecond:%d", h, m, s);

    return 0;
}