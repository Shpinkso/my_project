#ifndef HAIKU_HPP
#define HAIKU_HPP

class Haiku {
	public:
		Haiku(std::string str);
		char* evaluate_haiku(char* haiku_attempt);
		Sentence* get_next_sentence();
		char* get_next_sentance();
	private:
		std::string haiku_str;
		Sentence* current_sentence;
		std::string haiku_output;
		void append_syllable_to_output(unsigned int syllables);
		void append_haiku_result_to_output(bool is_haiku);
};
#endif