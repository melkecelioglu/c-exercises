int gcdByEuclidsAlgorithm(int n1, int n2) {
    if (n2 == 0) {
        return n1;
    }
    return gcdByEuclidsAlgorithm(n2, n1 % n2);
}