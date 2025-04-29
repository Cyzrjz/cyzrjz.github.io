#include "iostream"
#include "immintrin.h"

int main(){
    float a[4] = {1.0f, 2.0f, 3.0f, 4.0f};
    __m128 b = _mm_load_ps(a);
    for(int i = 0; i < 4; i++){
        std::cout << b[i] << " ";
    }

}
