//============================================================================
// Name        : lower_clasee_char.cpp
// Author      : Paul Blay
// Version     :
// Copyright   : All your base are belong to us
// Description : Very simple charactor class
//============================================================================

#include <iostream>
#include "../include/lower_case_char.hpp"
#if 0
#define LONGEST_HAIKU 				200
#define MAX_LINES_PER_HAIKU 		3
#define OUTPUT_FORMATTING_CHARS		4
#define MAX_SYLABLES_PER_HAIKU		LONGEST_HAIKU / 2		
#define LONGEST_OUTPUT_PER_HAIKU	MAX_SYLABLES_PER_HAIKU + OUTPUT_FORMATTING_CHARS
#endif
using namespace std;

#if 0
class Haiku {
	public:
		char* sentance_start;
		char* sentance_end;
		char output[LONGEST_OUTPUT_PER_HAIKU];
		int syllables[MAX_LINES_PER_HAIKU];
		void evaluate_haiku(char* haiku_attempt)
		void count_sentance_syllables();
		char* get_next_sentance();
		void format_output();
}
#endif

Lower_case_char::Lower_case_char(char c)
{
	set_new_value(c);
}

bool Lower_case_char::is_a_vowel()
{
	unsigned int i;
	bool is_a_vowel = false;
	for(i=0;i<sizeof(Lower_case_char::vowels) &&
	        is_a_vowel == false;i++)
	{
		if(charactor == Lower_case_char::vowels[i])
		{
			is_a_vowel = true;
		}
	}
	return is_a_vowel;
}

void Lower_case_char::set_new_value(char c)
{
	charactor = std::tolower(c);
}
#if 0
void Haiku::count_sentance_syllables()
{
	char* this_charactor = this->sentance_start;
	if(this_charactor)
}
#endif