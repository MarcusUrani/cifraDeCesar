#include <stdio.h>

int main(void)
{
    int i, j, k, n;
    char text[82];
    scanf("%d %d", &k, &n);
    getchar();
    for (i = 0; i < n; i++)
    {
        fgets(text, 82, stdin);
        for (j = 0; text[j] != '\n'; j++)
        {
            int c = text[j] + k;
            if (c > 126)
            {
                c -= 95;
            }
            text[j] = c;
        }
        printf("%s", text);
    }

    return 0;
}