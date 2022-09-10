#include <iostream>

void tailRecursion(int n)
{
    if(n>0){
        printf("%d", n);
        tailRecursion(n-1 ) ;
    }
}

void tailIteration(int n)
{
    while(n >0) {
        printf("%d", n);
        n--;
    }
}

int main() {
    int x = 3;
    tailRecursion(x);
    tailIteration(x);
    return 0;
}
