#include "compress.h"

int compress(std::ifstream &ifs)
{
	std::streambuf *buf = ifs.rdbuf();
	srand(time(NULL));

	double weight = rand() % 1 + -1;

	do
	{
		char ch = buf->sgetc();
		std::cout << ch;
	} while (buf->snextc() != EOF);

	return 0;
}
