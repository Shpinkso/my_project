#ifndef HAIKU_HPP
#define HAIKU_HPP

class Haiku {
	public:
		char* sentance_start;
		char* sentance_end;
		char output[LONGEST_OUTPUT_PER_HAIKU];
		int syllables[MAX_LINES_PER_HAIKU];
		char* evaluate_haiku(char* haiku_attempt);
		void count_sentance_syllables();
		char* get_next_sentance();
		void format_output();
};
#endif