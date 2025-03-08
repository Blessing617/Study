#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int rotateString(char *s, char *goal)
{
    int len = strlen(s);
    char top;
    int cnt = 0;

    for (int i = 0; i < len; i++)
    {
        // ÒÆ¶¯
        top = s[0];
        for (int j = 0; j < len - 1; j++)
        {
            s[j] = s[j + 1];
        }
        s[len - 1] = top;

        printf("%s\r\n", s);

        // ÅÐ¶Ï
        for (int n = 0; n < len; n++)
        {
            if (s[n] != goal[n])
                break;
            else
                cnt++;
            if (cnt == len)
                return 1;
        }
    }
    return 0;
}

int main(void)
{
    char s[] = "abcde";
    char goal[] = "cdeab";
    rotateString(s, goal);

    return 0;
}