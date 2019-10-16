#ifndef SENTENCE
#define SENTENCE
#include <iostream>
#define MAX_CHARACTORS 200

enum char_type{
    vowel = 0,
    other = 1
};

class Sentence{
    public:
        Sentence(std::string str);
        unsigned int get_syllable_count();
        std::string sentence_str;
    private:
        unsigned int syllables;
        std::string::iterator it;
        void skip_iterator_to_next(char_type type);
        void reset_iterator();
        const char lower_case_vowels[6] = {'a','e','i','o','u','y'};
};

#if 0
class Sentence {
	public:
		char sentence[MAX_CHARACTORS];
        Sentence(char* text, unsigned int length);
		void count_syllables();
};
#endif
#endif