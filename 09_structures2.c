/*
	Structures
*/
#include <stdio.h>

/* struct definition */
union var
{
	unsigned int int_val;
	unsigned char char_val[4];
	struct
	{
		unsigned int bit1:1;
		unsigned int bit2:1;
		unsigned int bit3:1;
		unsigned int bit4:1;
	};
};

int main()
{
	union var v;

	/* initialize */
	v.int_val = 0x12345678;

	/* int value */
	printf("int_val = %x\n", v.int_val);

	/* char value */
	printf("char_val[0] = %x\n", v.char_val[0]);
	printf("char_val[1] = %x\n", v.char_val[1]);
	printf("char_val[2] = %x\n", v.char_val[2]);
	printf("char_val[3] = %x\n", v.char_val[3]);
	
	/* bit fields */
	printf("bit1 = %d\n", v.bit1);
	printf("bit2 = %d\n", v.bit2);
	printf("bit3 = %d\n", v.bit3);
	printf("bit4 = %d\n", v.bit4);

	/* size */
	printf("sizeof union var = %d\n", sizeof(v));
	printf("sizeof v.int_val = %d\n", sizeof(v.int_val));
	printf("sizeof v.char_val = %d\n", sizeof(v.char_val));
}