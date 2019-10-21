//============================================================================
// Name        : lower_clasee_char.cpp
// Author      : Paul Blay
// Version     :
// Copyright   : All your base are belong to us
// Description : Very simple charactor class
//============================================================================

#include <iostream>
#include "../include/lower_case_char.hpp"


Lower_case_char::Lower_case_char(char c)
{
	set_new_value(c);
}

bool Lower_case_char::is_a_vowel()
{
	unsigned int i;
	bool is_a_vowel = false;
	for(i=0;i<sizeof(vowels) &&
	        is_a_vowel == false;i++)
	{
		if(charactor == vowels[i])
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
