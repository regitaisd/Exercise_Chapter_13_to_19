#ifndef essay_h
#define essay_h

class GradedActivity{
	private:
		int grammar;
		int spelling;
		int length;
		int content;
	public:
		GradedActivity();
		GradedActivity(int grammar, int spelling, int length, int content);
		void setGrammar(int grammar);
		void setSpelling(int spelling);
		void setLength(int length);
		void setCont(int content);
		int getGrammar();
		int getSpelling();
		int getLength();
		int getContent();
};

class Essay:public GradedActivity{
	protected:
		int score;
	public:
		Essay();
		Essay(int, int, int, int, int);
		void setScore(int score);
		int getScore();
};

#endif
