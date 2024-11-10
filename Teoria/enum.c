#include <stdio.h>
#include <string.h>


enum Day{L = 1,M= 2,MM= 3,J= 4,V= 5,S= 6,D= 7};
int main() {

    enum Day today = L;
    printf("%d",today);
    return 0;
}