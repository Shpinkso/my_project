#ifndef SENTENCE
#define SENTENCE

#include <string>

#define MAX_CHARACTORS 200

class Sentence{
    public:
        Sentence::Sentence(std::string str);
        unsigned int get_syllable_count();
    private:
        std::string sentence_str;
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