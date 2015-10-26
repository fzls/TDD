#include "gmock/gmock.h"
#include <string>

class Soundex
{
public:
	std::string encode(const std::string& word) const {
		return "A";
	}
};
//test
TEST(SoundexEncoding, RetainsSoleLetterOfOneLetterWord) {
	Soundex soundex;

	auto encoded = soundex.encode("A");

	ASSERT_THAT(encoded, testing::Eq("A"));
}

