// index with 0
Addc(A[i][j]) = Lo + [j * m(m = no.of rows) + i] * w;

// if first index starts with 1;
Addc(A[i][j]) = Lo(base Address) + [(j - 1) * m(m = no.of rows) + (i - 1)] * w(data type);

// nD Arrays

Type A[d1][d2][d3][d4]

    Addc(A[i1][i2][i3][i4]) = Lo + [(i4 * d1 * d2 * d3) + (i3 * d2 * d1) + (i2 * d1) + (i1)] * w;

    O(n^2)