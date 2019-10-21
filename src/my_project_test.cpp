#include "catch.hpp"
#include <iostream>
#include "../include/lower_case_char.hpp"
#include "../include/sentence.hpp"
#include "../include/haiku.hpp"


/* So, we've learned that, in Catch2, BDD is not really what I was hoping for.
   It doesn't offer a built in way to write the glue code and ensure that a
   GIVEN/WHEN/THEN sentence always means the same thing. Perhaps cucumber-cpp
   is the next place to look */
SCENARIO( "Haikus are detected correcty regarless of capitalisaion", "[Haiku]" ) {
	std::string result;
    GIVEN( "A Haiku with a mix of capitalisation" ) {
		Haiku test_haiku("hApPy purple frOg/eAting buGs in the maRSHEs/get indigestIOn");
		WHEN("Evaulating the Haiku"){
			result = test_haiku.evaluate_haiku();
			THEN("The output confirms a Haiku"){
				REQUIRE(result == "5,7,5,Y");
			}
		}
	}
}

SCENARIO( "Single sylable lines are correctly evaulated", "[Haiku]" ) {
	std::string result;
    GIVEN( "Three single syllable lines with mutliple vowels" ) {
		Haiku test_haiku("aeeuuuii/aAAaaAA/OIUOIUOIU");
		WHEN("Evaulating the lines"){
			result = test_haiku.evaluate_haiku();
			THEN("The output confirms 1,1,1,N"){
				REQUIRE(result == "1,1,1,N");
			}
		}
	}
}

TEST_CASE("Readme Haiku 1", "[Haiku]") {
	std::string result;
	Haiku test_haiku("Computer programs/The bugs try to eat my code/I must not let them");
	result = test_haiku.evaluate_haiku();
	REQUIRE(result == "5,8,5,N");
}

TEST_CASE("Readme Haiku 2", "[Haiku]") {
	std::string result;
	Haiku test_haiku("happy purple frog/eating bugs in the marshes/get indigestion");
	result = test_haiku.evaluate_haiku();
	REQUIRE(result == "5,7,5,Y");
}


TEST_CASE("Syllable counting", "[get_syllable_count]") {
	unsigned int syllables = 0;
	Sentence test_sentence ("test string");
	syllables = test_sentence.get_syllable_count();
	REQUIRE(syllables == 2);
}
TEST_CASE("Rows of vowels", "[get_syllable_count]") {
	unsigned int syllables = 0;
	Sentence test_sentence ("aaabiieou");
	syllables = test_sentence.get_syllable_count();
	REQUIRE(syllables == 2);
}
TEST_CASE("No syllables", "[get_syllable_count]") {
	unsigned int syllables = 0;
	Sentence test_sentence ("rrrrrrrr");
	syllables = test_sentence.get_syllable_count();
	REQUIRE(syllables == 0);
}
TEST_CASE("Captials", "[get_syllable_count]") {
	unsigned int syllables = 0;
	Sentence test_sentence ("AAAbUIOccc  O");
	syllables = test_sentence.get_syllable_count();
	REQUIRE(syllables == 3);
}

TEST_CASE("Mix of captials ane lowercase", "[get_syllable_count]") {
	unsigned int syllables = 0;
	Sentence test_sentence ("AaAbUiOccc  O");
	syllables = test_sentence.get_syllable_count();
	REQUIRE(syllables == 3);
}

TEST_CASE("Count twice", "[get_syllable_count]") {
	unsigned int syllables = 0;
	Sentence test_sentence ("AaAbUiOccc  O");
	syllables = test_sentence.get_syllable_count();
	REQUIRE(syllables == 3);
	syllables = test_sentence.get_syllable_count();
	REQUIRE(syllables == 3);
}

TEST_CASE("Checking for vowels", "[is_a_vowel]") {
	char test_char = 'a';
	Lower_case_char this_char(test_char);
	REQUIRE( this_char.is_a_vowel() == true);
	test_char = 'e';
	this_char.set_new_value(test_char);
	REQUIRE( this_char.is_a_vowel() == true);
	test_char = 'i';
	this_char.set_new_value(test_char);
	REQUIRE( this_char.is_a_vowel() == true);
	test_char = 'o';
	this_char.set_new_value(test_char);
	REQUIRE( this_char.is_a_vowel() == true);
	test_char = 'u';
	this_char.set_new_value(test_char);
	REQUIRE( this_char.is_a_vowel() == true);
	test_char = 'y';
	this_char.set_new_value(test_char);
	REQUIRE( this_char.is_a_vowel() == true);
	test_char = 'A';
	this_char.set_new_value(test_char);
	REQUIRE( this_char.is_a_vowel() == true);
	test_char = 'E';
	this_char.set_new_value(test_char);
	REQUIRE( this_char.is_a_vowel() == true);
	test_char = 'I';
	this_char.set_new_value(test_char);
	REQUIRE( this_char.is_a_vowel() == true);
	test_char = 'O';
	this_char.set_new_value(test_char);
	REQUIRE( this_char.is_a_vowel() == true);
	test_char = 'U';
	this_char.set_new_value(test_char);
	REQUIRE( this_char.is_a_vowel() == true);
	test_char = 'Y';
	this_char.set_new_value(test_char);
	REQUIRE( this_char.is_a_vowel() == true);
	test_char = 'b';
	this_char.set_new_value(test_char);
	REQUIRE( this_char.is_a_vowel() == false);
	test_char = 'B';
	this_char.set_new_value(test_char);
	REQUIRE( this_char.is_a_vowel() == false);
	test_char = ' ';
	this_char.set_new_value(test_char);
	REQUIRE( this_char.is_a_vowel() == false);
	test_char = '~';
	this_char.set_new_value(test_char);
	REQUIRE( this_char.is_a_vowel() == false);
	test_char = '!';
	this_char.set_new_value(test_char);
	REQUIRE( this_char.is_a_vowel() == false);
}