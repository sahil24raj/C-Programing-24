
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    int P[n+1][m+1];

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Initialize prefix sum array with 0
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            P[i][j] = 0;
        }
    }

    // Build prefix sum matrix (1-indexed)
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            P[i][j] = a[i-1][j-1]
                       + P[i-1][j]
                       + P[i][j-1]
                       - P[i-1][j-1];
        }
    }

    int l1, r1, l2, r2;
    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);

    // Convert to prefix indexing
    int x1 = l1 + 1;
    int y1 = r1 + 1;
    int x2 = l2 + 1;
    int y2 = r2 + 1;

    int sum = P[x2][y2]
            - P[x1 - 1][y2]
            - P[x2][y1 - 1]
            + P[x1 - 1][y1 - 1];

    printf("Sum = %d\n", sum);

    return 0;
}
