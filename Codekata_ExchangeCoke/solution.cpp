#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int n) {
    int answer = 0;

    while (n >= a)
    {
        int new_coke = (n / a) * b;
        int leftover = n % a;

        answer += new_coke;

        n = new_coke + leftover;
    }



    return answer;
}