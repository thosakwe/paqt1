#include <cerrno>
#include <cstring>
#include <fstream>
#include <iostream>
#include "compress.h"

int main(int argc, char** argv) {
	bool decompress = false;
	char* input_file = nullptr;

	for (int i = 1; i < argc; i++) {
		char* arg = argv[i];

		if (!strcmp(arg, "-d") || !strcmp(arg, "--decompress")) {
			decompress = true;
		} else {
			// TODO: Compress a whole directory
			input_file = arg;
			break;
		}
	}

	if (input_file == nullptr) {
		std::cerr << "fatal error: no input file" << std::endl;
		return 1;
	}


	std::ifstream ifs(input_file);

	if (!ifs) {
		std::cerr << "fatal error: " << std::strerror(errno) << std::endl;
		return 2;
	}

	if (decompress) {
		std::cerr << "fatal error: decompression is not yet supported." << std::endl;
		return 1;
	}

	auto result = compress(ifs);
	ifs.close();
	return result;
}




