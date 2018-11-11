#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long int modulus = pow(2, 31);
    long int a = 1103515245;
    long int inc = 12345;
    long int seed = 6789101112;
    while(1) {
        seed = (a * seed + inc) % modulus;
        fwrite(&seed, sizeof(long int), 1, stdout);
    }
}
