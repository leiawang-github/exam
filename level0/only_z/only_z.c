#include <unistd.h>

void only_z(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	only_z('c');
}