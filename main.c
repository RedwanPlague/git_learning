#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%d is not only -(-%d), but also 1/(1/%d))", a, a, a);
    return 0;
}
