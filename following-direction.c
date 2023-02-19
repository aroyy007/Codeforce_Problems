#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, x = 0, y = 0;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        for (int i = 0; i < n; i++)
        {
            if      (s[i] == 'L') x--;
            else if (s[i] == 'R') x++;
            else if (s[i] == 'U') y++;
            else if (s[i] == 'D') y--;
        }
        if
        (x == 1 && y == 1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
