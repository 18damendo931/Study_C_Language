#include <stdio.h>

int main(void){
    int x, y;
    int *px, *py;

    px = &x;
    py = &y;
    
    x = 100;
    y = 200;
    
    printf("変数xの値 = %d\n", x);
    printf("変数xのアドレス = %d\n", &x);
    printf("変数yの値 = %d\n", y);
    printf("変数yのアドレス = %d\n", &y);
    printf("変数pxの値 = %d\n", px);
    printf("変数pyの値 = %d\n", py);
    printf("変数pxの参照先の値 = %d\n", *px);
    printf("変数pyの参照先の値 = %d\n", *py);
	printf("変数pxのアドレス = %d\n", &px);
    printf("変数pyのアドレス = %d\n", &py);
	
    return 0;
}
