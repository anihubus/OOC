#include <stdio.h>
int main() {
    int n[100], i = 0, j, sum = 0;
    scanf("%d", &j);
    for (i = 0; i < j; i++) {
        scanf("%d", &n[i]);
        sum += n[i];
    }
    printf("%d", sum);
    return 0;
}