# Spoj-number-conversion

This is a number converter based on spoj exercise https://pl.spoj.com/problems/TCONNUM/



Every integer number n is represented in positional number system of base r by a sequence of digits 0 ≤ di < r, so the value is equal to:

n = d0  + r * d1 + r2 * d2 + r3 * d3 + ...

Your task is to convert a given number in r-base represantation into s-base representation, for example: decimal 231 into binary 11100111. Assume that r ≤ 36 and the digits are 0,1,2,3,4,5,6,7,8,9, A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z.

Input
N [the number of series ≤ 1000] 
n r s [n ≤ 101000, r,s ≤ 36]

Output
n [s-base representation of number n]

Text grouped in [ ] does not appear in the input and output file.

Example
Input:
3
231 10 2
ABC 15 10
XYZ 36 2

Output:
11100111
2427
1010101111111011
