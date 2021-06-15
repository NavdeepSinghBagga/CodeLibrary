#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b, sum, mat = 0, x;
        scanf("%d%d", &a, &b);
        sum = a + b;
        while (sum) {
            x = sum % 10;
            if (x == 0 || x == 6 || x == 9)
                mat += 6;
            else if (x == 1)
                mat += 2;
            else if (x == 2 || x == 5 || x == 3)
                mat += 5;
            else if (x == 4)
                mat += 4;
            else if (x == 7)
                mat += 3;
            else if (x == 8)
                mat += 7;
            sum /= 10;
        }
        printf("%d\n", mat);
    }
}
