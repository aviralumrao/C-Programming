#include <stdio.h>

void foo(int *x) {
    for(int j=0; j<3; j++) {
        printf("%d ", x[j]);   // prints 3 elements starting from x
    }
}

int main() {
    int a[] = {10, 20, 30, 40, 50};
    foo(&a[2]);   // passes subarray {30, 40, 50}
    return 0;
}
