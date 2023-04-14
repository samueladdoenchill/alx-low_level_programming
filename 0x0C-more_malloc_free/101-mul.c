#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_multiply(char *s1, char *s2, int l1, int l2) {
    int i = l2, j, k;
    char *res = malloc(l1 + l2 + 1);
    memset(res, '0', l1 + l2);

    while (i--) {
        int carry = 0, n2 = s2[i] - '0';
        j = l1, k = i + l1;
        while (j--) {
            int n1 = s1[j] - '0', temp = n1 * n2 + carry + res[k] - '0';
            carry = temp / 10;
            res[k--] = temp % 10 + '0';
        }
        res[k] += carry;
    }

    i = 0;
    while (res[i] == '0') i++;
    if (i == l1 + l2) return "0";
    return res + i;
}

int main(int argc, char **argv) {
    char *s1, *s2, *result;
    int l1, l2;

    if (argc != 3) {
        printf("Usage: %s <number> <number>\n", argv[0]);
        return 1;
    }

    s1 = argv[1];
    s2 = argv[2];
    l1 = strlen(s1);
    l2 = strlen(s2);

    result = _multiply(s1, s2, l1, l2);

    printf("%s\n", result);

    free(result);

    return 0;
}

