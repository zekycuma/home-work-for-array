
#include <stdio.h>
#include <stdlib.h>

#define z 3
#define N 3

int main()
{
    int f[z][N], v[3][3], g[z][N];
    int i, j, k, l;


  
    for (i = 0; i < z; i++) {
        for (j = 0; j < N; j++) {
            f[i][j] = rand() % 256;
        }
    }


    printf("Matrix f:\n");
    for (i = 0; i < z; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", f[i][j]);
        }
        printf("\n");
    }


    printf("Enter the 9 values of the filter v, separated by spaces:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &v[i][j]);
        }
    }


    printf("Filter v:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }

 
    for (i = 0; i < z; i++) {
        for (j = 0; j < N; j++) {
            g[i][j] = 0;
        }
    }


    int sum = 0;
    for (i = 0; i < z; i++) {
        for (j = 0; j < N; j++) {
            sum = 0;
            for (k = -1; k <= 1; k++) {
                for (l = -1; l <= 1; l++) {
                    if (i + k < 0 || i + k >= z || j + l < 0 || j + l >= N)
                        sum += 0;
                    else
                        sum += v[k + 1][l + 1] * f[i + k][j + l];
                }
            }
            printf("%d ", sum);
            g[i][j] = sum;
        }
    }
    // Print matrix g
    printf("Matrix g:\n");
    for (i = 0; i < z; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", g[i][j]);
        }
        printf("\n");
    }
    return 0;
}
