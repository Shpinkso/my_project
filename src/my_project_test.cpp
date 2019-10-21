#include "catch.hpp"
#include <iostream>
#include "../include/lower_case_char.hpp"
#include "../include/sentence.hpp"
#include "../include/haiku.hpp"

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