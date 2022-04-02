for (i = 1; i < = n; i++)    // n+1次
    for (j = 1; j <= n; j++) // n*n+1次
    {
        c[i][j] = 0;
        for (k = 0; k < n; k++) // n*n*n+1次
            c[i][j] = c[i][j] + a[i][k] * b[k][j]; // n*n*n次
    }