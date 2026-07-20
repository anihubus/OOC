#include <stdio.h>
int main() {
    int n,i=0,j,sum=0;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&j);
        sum=sum+j;
        i++;
    }
    printf("%d", sum);
    return 0;
}