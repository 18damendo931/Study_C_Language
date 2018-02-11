#define __STDC_WANT_KIB_EXT1__ 1
#include <stdint.h>
#include <stdio.h>

int main(void) {
	int64_t x, y;
	int64_t *px, *py;

	px = &x;
	py = &y;

	x = 100;
	y = 200;

	printf_s("変数xの値 = %d\n", x);
	printf_s("変数xのアドレス = %p\n", &x);
	printf_s("変数yの値 = %d\n", y);
	printf_s("変数yのアドレス = %p\n", &y);
	printf_s("変数pxの値 = %d\n", px);
	printf_s("変数pyの値 = %d\n", py);
	printf_s("変数pxの参照先の値 = %d\n", *px);
	printf_s("変数pyの参照先の値 = %d\n", *py);
	printf_s("変数pxのアドレス = %p\n", &px);
	printf_s("変数pyのアドレス = %p\n", &py);

	return 0;
}
