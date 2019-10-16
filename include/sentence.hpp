#ifndef SENTENCE
#define SENTENCE
#include <iostream>
#define MAX_CHARACTORS 200

class Sentence{
    public:
        Sentence(std::string str);
        unsigned int get_syllable_count();
        std::string sentence_str;
    private:
        
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