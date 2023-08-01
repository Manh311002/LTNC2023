#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int max = (*a > *b) ? *a : *b;
    int min = (*a > *b) ? *b : *a;
    *a = *a + *b;
    *b = max - min;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
