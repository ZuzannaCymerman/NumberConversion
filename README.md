# SpojExercises

This repository contains done programming exercises from https://pl.spoj.com

### 1. Number converter

 directory number_converter
 
 https://pl.spoj.com/problems/TCONNUM/

 Every integer number n is represented in positional number system of base r by a sequence of digits 0 ≤ di < r, so the value is equal to:
n = d0  + r * d1 + r2 * d2 + r3 * d3 + ...
Your task is to convert a given number in r-base represantation into s-base representation, for example: decimal 231 into binary 11100111. Assume that r ≤ 36 and the digits are 0,1,2,3,4,5,6,7,8,9, A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z.

### 2. NWW

Given are n natural numbers a1, ..., an. Find the least common multiple of these numbers, i.e. the smallest natural number M such that for each i the number ai divides M without a remainder.

Entry
The first line shows the number of tests.

For each test, the number n is given first, and then in the next line of the number a1 ..., an.

It can be assumed that both the numbers ai and the result are in the range [1..264-1].

Exit
Provide the result on a separate line for each case.

Example
Input:
2
3
2 3 5
3
6 9 15
