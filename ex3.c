#include <stdio.h>

void update(int *a,int *b) {
    
    
    int aTemp = *a + *b;
    int bTemp = *b - *a;
    
    *a = aTemp;
    *b = bTemp;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
