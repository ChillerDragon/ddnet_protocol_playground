#include <ddnet_protocol/packer.h>
#include <stdio.h>

int main() {
	uint8_t bytes[] = {'f', 0x01};
	Unpacker unpacker = unpacker_new(bytes, sizeof(bytes));
	const char *str = unpacker_get_string(&unpacker);
	printf("str '%s' \n", str);
}
