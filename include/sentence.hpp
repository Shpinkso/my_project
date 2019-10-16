#ifndef SENTENCE_HPP
#define SENTENCE_HPP


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

#endif