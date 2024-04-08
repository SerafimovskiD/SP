#include <stdio.h>
#include <math.h>
#define MAX 100

int main() {
    int a[MAX][MAX], b[MAX], m, n, i, j, maxJ, l;
    float as;
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < m; i++) {
        as = 0;
        for (j = 0; j < n; j++) {
            as += a[i][j];
        }
        as /= n;
        float maxD = fabs(as - a[i][0]);
        float d = 0;
        maxJ = 0;
        for (j = 0; j < n; j++) {
            d = fabs(as - a[i][j]);
            if (d > maxD) {
                maxD = d;
                maxJ = j;
            }
        }
        b[l++] = a[i][maxJ];

    }

    for (i = 0; i < l; i++)
        printf("%d ", b[i]);


    return 0;
}