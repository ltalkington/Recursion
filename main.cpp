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

void headRecursion(int n)
{
    if(n>0) {
        headRecursion(n-1);
        printf("%d", n);
    }
}

void headIteration(int n) {
    int i = 1;
    while(i <=n) {
        printf("%d", i);
        i++;
    }
}

void treeRecursion(int n) {
    if(n>0) {
        printf("%d", n);
        treeRecursion(n-1);
        treeRecursion(n-1);
    }
}
void indirectRecursion2(int n);

void indirectRecursion1(int n) {
    if(n>0) {
        printf("%d", n);
        indirectRecursion2(n-1);
    }
}

void indirectRecursion2(int n) {
    if(n>1) {
        printf("%d", n);
        indirectRecursion1(n/2);

    }
}
int main() {
    int x = 3;
    printf("Tail Recursion:");
    tailRecursion(x);
    printf("\nTail Iteration:");
    tailIteration(x);
    printf("\nHead Recursion:");
    headRecursion(x);
    printf("\nHead Iteration:");
    headIteration(x);
    printf("\nTree Recursion:");
    treeRecursion(x);
    printf("\nIndirect Recursion:");
    indirectRecursion1(20);
    return 0;
}
