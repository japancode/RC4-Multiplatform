#include <string>
#ifndef ARC4_H_
#define ARC4_H_

class RC4
{
public:
	static std::string rc4_perform(const std::string& input, const std::string& key) {
		std::string out;
		out.resize(input.size());

		int x{}, y{}, j{};
		unsigned char box[256];

		for (int i = 0; i < 256; i++)
			box[i] = (char)i;

		for (int i = 0; i < 256; i++)
		{
			j = (key[i % key.size()] + box[i] + j) % 256;
			x = box[i];

			box[i] = box[j];
			box[j] = x;
		}

		for (int i{}; i < input.size(); i++)
		{
			y = (i + 1) % 256;
			j = (box[y] + j) % 256;
			x = box[y];

			box[y] = box[j];
			box[j] = x;

			out[i] = char(input[i] ^ box[(box[y] + box[j]) % 256]);
		}

		return out;
	}
};


#endif