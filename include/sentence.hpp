#ifndef SENTENCE_HPP
#define SENTENCE_HPP
#include <iostream>
#define SYLLABLES_NOT_COUNTED -1

enum char_type{
    vowel = 0,
    other = 1
};

class Sentence{
    public:
        Sentence(std::string str);
        unsigned int get_syllable_count();
    private:
        std::string sentence_str;
        int syllables;
        std::string::iterator it;
        void skip_iterator_to_next(char_type type);
        void reset_iterator();
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