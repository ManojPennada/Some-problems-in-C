/*Description

Given a size, and an array of integers, Write a ‘C’ program and subsequent algorithm to find the sum of min(b), where b ranges over every sub-array of the given array. A sub-array is defined as a contiguous sequence of numbers in an array.

For example, the Inputs are: Size = 4; array = [3, 1, 2, 4]; expected output: 17

Explanation: Subarrays are [3], [1], [2], [4], [3,1], [1,2], [2,4], [3,1,2], [1,2,4], [3,1,2,4].

Minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1.

Sum is 17.*/

#include <stdio.h>
#define MIN(a,b) (((a)<(b))?(a):(b))
int main() 
{
    int n; 
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int mi = n;
            for (int k = i; k <= j; k++) {
                mi = MIN(mi, a[k]);
            }
            ans += mi;
        }
    }
    printf("%d\n", ans);
    return 0;
}
