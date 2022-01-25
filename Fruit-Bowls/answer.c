#include <stdio.h>

int main() {
    int fruit, apple, leftover;
    scanf("%d", &fruit);

    apple = fruit / 2;
    if (apple > 3)
    {
    	leftover = apple % 3;
    }
    
    printf("%d", (apple - leftover) / 3);
    
    return 0;
}
