#include <iostream>

int func(int n)
{
    static int x=0;
    if(n>0){
        x++;
        return func(n-1 ) + x ;
    }
    return 0;
}

int main() {
    int x = 3;
    printf("%d", func(x));
    return 0;
}
