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
	printf_s("変数xのアドレス = %d\n", &x);
	printf_s("変数yの値 = %d\n", y);
	printf_s("変数yのアドレス = %d\n", &y);
	printf_s("変数pxの値 = %d\n", px);
	printf_s("変数pyの値 = %d\n", py);
	printf_s("変数pxの参照先の値 = %d\n", *px);
	printf_s("変数pyの参照先の値 = %d\n", *py);
	printf_s("変数pxのアドレス = %d\n", &px);
	printf_s("変数pyのアドレス = %d\n", &py);

	return 0;
}
