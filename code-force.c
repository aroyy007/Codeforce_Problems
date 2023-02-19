#include <stdio.h>
#include <string.h>

int main() {

    int t;
    scanf("%d", &t);


    for (int i = 0; i < t; i++) {

        char c;
        scanf(" %c", &c);


        if (strchr("codeforces", c) != NULL) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
