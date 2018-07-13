#include <stdio.h>

int main () {

    int i = 0;
    int loop_count = 5;

    printf("Case1:\n");
    while (i<loop_count) {
        printf("%d\n",i);
        i++;
    }

    printf("Case2:\n");
    i=20;
    while (0) {
        printf("%d\n",i);
        i++;
    }

    printf("Case3:\n");
    i=0;
    while (i++<5) {
        printf("%d\n",i);
    }
    printf("Case4:\n");
    i=3;
    while (i < 5 && i >=2) {
        printf("%d\n",i);
        i++;
    }

    return 0;
}