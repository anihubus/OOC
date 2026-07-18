#include <stdio.h>

int main() {
    char name[50];
    int rollno;
    char div;
    fgets(name, sizeof(name), stdin);
    scanf("%d", &rollno);
    scanf(" %c", &div);
    printf("%s %d %c", name, rollno, div);
    return 0;
}