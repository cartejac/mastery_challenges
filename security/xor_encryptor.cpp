#include <cstring>
#include <cstdlib>
#include <iostream>

using std::cout;
using std::endl;

/* Function: xor_str()
 * Description: Goes through each byte of a null-terminate C-string
 *	and xors it with the given key. Algorithm operates in place
 */
void xor_str(char* str, char key)
{
	unsigned short len = strlen(str);
	for (unsigned short i = 0; i < len; ++i) {
		str[i] ^= key;
	}
}

void validate_args(int argc, char** argv)
{
	unsigned short key_len;
	if (argc != 3) {
		cout << "Improper number of arguments. This program expects 2 args:\n"
			<< "\tA quoted string\n" << "\tA letter (e.g. a)" << endl;
		exit(1);
	}

	key_len = strlen(argv[2]);
	if (key_len != 1) {
		cout << "The key is expected to be a single character!" << endl;
		exit(2);
	}

}

int main(int argc, char** argv){
	cout << "Welcome to the XOR Encryptor." << endl;
	validate_args(argc, argv);

	// Get the message and key
	char *str = argv[1];
	char key = *(argv[2]);
	cout << "Input string: " << str << endl;
	
	// Encrypt using XOR
	xor_str(str, key);
	cout << "Your encrypted string: " << str << endl;

	// Decrypt using XOR and same key
	xor_str(str, key);
	cout << "Your decrypted string: " << str << endl;

	return EXIT_SUCCESS;
}
