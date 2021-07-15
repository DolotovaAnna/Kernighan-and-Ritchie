#include <stdio.h>
#include <math.h>
#include <limits.h>
int main()
{
	char CHAR_MIN_COUNTED = -pow(2, 7);
	char CHAR_MAX_COUNTED = pow(2, 7) - 1;
	printf("SIGNED CHAR: %d to %d \t\t\t %d to %d \n", CHAR_MIN_COUNTED, CHAR_MAX_COUNTED, SCHAR_MIN, SCHAR_MAX);

	unsigned char UCHAR_MAX_COUNTED = pow(2, 8) - 1;
	printf("UNSIGNED CHAR: 0 to %u \t\t\t 0 to %u \n\n", UCHAR_MAX_COUNTED, UCHAR_MAX);

	int INT_MIN_COUNTED = -pow(2, 31);		//
	int INT_MAX_COUNTED = pow(2, 31) - 1;
	printf("SIGNED INT: %d to %d \t\t %d to %d \n", INT_MIN_COUNTED, INT_MAX_COUNTED, INT_MIN, INT_MAX);

	unsigned int UINT_MAX_COUNTED = pow(2, 32) - 1;
	printf("UNSIGNED INT: 0 to %u \t\t\t 0 to %u \n\n", UINT_MAX_COUNTED, UINT_MAX);

	short SHRT_MIN_COUNTED = -pow(2, 15);
	short SHRT_MAX_COUNTED = pow(2, 15) - 1;
	printf("SIGNED SHORT: %d to %d \t\t\t %d to %d \n", SHRT_MIN_COUNTED, SHRT_MAX_COUNTED, SHRT_MIN, SHRT_MAX);

	unsigned short USHRT_MAX_COUNTED = pow(2, 16) - 1;
	printf("UNSIGNED SHORT: 0 to %u \t\t\t 0 to %u \n\n", USHRT_MAX_COUNTED, USHRT_MAX);

	long long LONG_MIN_COUNTED = -pow(2, 63);
	long long LONG_MAX_COUNTED = pow(2, 63) - 1;
	printf("SIGNED LONG: %lld to %lld \t %lld to %lld \n", LONG_MIN_COUNTED, LONG_MAX_COUNTED, LONG_LONG_MIN, LONG_LONG_MAX);

	unsigned long long ULONG_MAX_COUNTED = pow(2, 64) - 1;
	printf("UNSIGNED LONG: 0 to %llu \t\t\t 0 to %llu \n\n", ULONG_MAX_COUNTED, ULONG_LONG_MAX);
}
