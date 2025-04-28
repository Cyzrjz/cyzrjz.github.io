#include <immintrin.h>
#include "stdio.h"

int main(){
    __m128i a = _mm_set1_epi8(10);
    int b = _mm_extract_epi8(a,15);
    printf("%d\n",b);
}
