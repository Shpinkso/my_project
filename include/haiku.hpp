#ifndef HAIKU_HPP
#define HAIKU_HPP

class Haiku {
	public:
		Haiku(std::string str);
		std::string evaluate_haiku();
	private:
		std::string haiku_str;
		std::string haiku_output;
		std::string poem_line;
		void get_next_line();
		void append_syllable_to_output(unsigned int syllables);
		void append_haiku_result_to_output();
};
#endif