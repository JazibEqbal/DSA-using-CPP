// index with 0
Addr(A[i][j]) = Lo(base Address) + [i * n(n = number of columns) + j] * w(data type);

// if first index starts with 1;
Addr(A[i][j]) = Lo(base Address) + [(i - 1) * n(n = number of columns) + (j - 1)] * w(data type);

// index with 0
A[i] = Lo + i * w;

// if first index starts with 1;
A[i] = Lo + (i - 1) * w;

// nD Arrays

Type A[d1][d2][d3][d4]

    Addr(A[i1][i2][i3][i4]) = Lo + [(i1 * d2 * d3 * d4) + (i2 * d3 * d4) + (i3 * d4) + (i4)] * w;

    