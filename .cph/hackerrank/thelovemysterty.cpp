#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int i, j, k, n, q, ans = 0;
    scanf("%d", &q);
    char s[10000];
    for (k = 0; k < q; k++)
    {
        ans = 0;
        scanf("%s", s);
        n = strlen(s);
        for (i = 0, j = n - 1; i < n / 2; i++, j--)
            ans = ans + abs(s[i] - s[j]);
        printf("%d\n", ans);
    }
    return 0;
}