//============================================================================
// Name        : haiku.cpp
// Author      : Paul Blay
// Version     :
// Copyright   : All your base are belong to us
// Description : Does all things Haiku
//============================================================================

#include <iostream>
#include <assert.h>

#define MAX_LINES_PER_HAIKU 		3
#define LINE_END_CHAR               '/'
#define HAIKU_SYLLABLE_OUTPUT       "5,7,5,"

#include "../include/sentence.hpp"
#include "../include/haiku.hpp"

Haiku::Haiku(std::string str) : haiku_str(str)
{
    haiku_str += LINE_END_CHAR;
}

std::string Haiku::evaluate_haiku()
{
    unsigned int i;
    unsigned int syllables;
    for(i=0; i<MAX_LINES_PER_HAIKU;i++)
    {
        get_next_line();
        Sentence current_sentence(poem_line);
        syllables = current_sentence.get_syllable_count();
        append_syllable_to_output(syllables);
    }
    append_haiku_result_to_output();
    return haiku_output;
}

void Haiku::get_next_line()
{ 
    std::string::size_type n;
    n = haiku_str.find(LINE_END_CHAR,0);
    assert(n != std::string::npos);
    poem_line = haiku_str.substr(0, n);
    haiku_str.erase(0, n+1);
}

void Haiku::append_syllable_to_output(unsigned int syllables)
{
    std::string s = std::to_string(syllables);
    haiku_output.append(s);
    haiku_output.append(1,',');
}

void Haiku::append_haiku_result_to_output()
{
    std::string haiku_syllables(HAIKU_SYLLABLE_OUTPUT);
    if(haiku_output.compare(haiku_syllables) == 0)
    {
        haiku_output.append(1,'Y');
    }
    else
    {
        haiku_output.append(1,'N');
    }
}