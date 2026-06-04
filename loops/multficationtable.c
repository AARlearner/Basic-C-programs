#include <stdio.h>

int main() {
    int num=1;
    scanf("%d", &num);
    do{
        int i=1;
printf("\nMultification tble of %d:\n",num);
    do {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    } while (i <= 10);
    num++;
}
while(num<=10);

    return 0;
}