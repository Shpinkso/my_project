#ifndef LOWER_CASE_CHAR
#define LOWER_CASE_CHAR

class Lower_case_char{
	public:
        Lower_case_char(char c);
        void set_new_value(char c);
        bool is_a_vowel(void);
	private:
        char charactor;
		char vowels[6] = {'a','e','i','o','u','y'};
};
#endif