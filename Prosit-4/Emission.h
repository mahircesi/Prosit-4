#pragma once
class Emission
{
private:
	typedef void (*evt)(const char*);
	evt e;
	typedef struct message {
		int freq;
		char data[32];
		struct message* next;
	}M;
	M m1, m2, m3, m4, *list, *list2;

public:
	Emission();
	void signal();
};

