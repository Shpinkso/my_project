//============================================================================
// Name        : sentence.cpp
// Author      : Paul Blay
// Version     :
// Copyright   : All your base are belong to us
// Description : Very simple sentence class
//============================================================================

#include "../include/sentence.hpp"
#include "../include/lower_case_char.hpp"

Sentence::Sentence(std::string str)
            : sentence_str(str)
{
}

unsigned int get_syllable_count()
{
    return 0;
}