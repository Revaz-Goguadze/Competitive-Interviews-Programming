unsigned long long int singleTriangle, joinTriangles, nPlusOne, kPLusOne, tmp1, tmp2;
    nPlusOne = (n + 1) % 1000000007;
    joinTriangles = (nPlusOne * n) % 1000000007;
    joinTriangles /= 2;
    kPLusOne = (k + 1) % 1000000007;
    tmp1 = (nPlusOne + joinTriangles) % 1000000007;
    tmp2 = (tmp1 * kPLusOne) % 100000000;
    return (tmp1 + tmp2) % 100000000;
    //return return (((n + 1) + ((n * (n + 1)) / 2)) * (k + 1)) % 1000000007;