//============================================================================
// Name        : sentence.cpp
// Author      : Paul Blay
// Version     :
// Copyright   : All your base are belong to us
// Description : Using composition, add a syllable counter to the string class
//============================================================================

#include <string>
#include <iostream>
#include "../include/sentence.hpp"
#include "../include/lower_case_char.hpp"

Sentence::Sentence(std::string str) : sentence_str(str)
{
    it = sentence_str.begin();
}

unsigned int Sentence::get_syllable_count()
{
    syllables = 0;
    reset_iterator();
    Lower_case_char letter(*it);
    bool at_a_vowel = letter.is_a_vowel();
    do
    {
        if(at_a_vowel)
        {
            skip_iterator_to_next(other);
            syllables++;
            at_a_vowel = false;
        }
        else
        {
            skip_iterator_to_next(vowel);
            at_a_vowel = true;
        }        
    }while (it != sentence_str.end());
    return syllables;
}
void Sentence::reset_iterator()
{
    it = sentence_str.begin();
}

void Sentence::skip_iterator_to_next(char_type type)
{
    it++;
    for(;it != sentence_str.end();it++)
    {
        Lower_case_char letter(*it);
        if(type == vowel && letter.is_a_vowel())
        {
            break;
        }
        if(type == other && !(letter.is_a_vowel()))
        {
            break;
        }
    }
}