#pragma once
#include "ExecutableMenuItem.h"
#include <string>
#include <vector>

using std::string;
using std::vector;


const string SENTENCE = "the sky is blue";

class ReverseWordsInString :
	public ExecutableMenuItem
{
private:
	string ToString(vector<string>& words);

protected:
	ReverseWordsInString(string description) :
		ExecutableMenuItem(description) {};

	void ExecuteFunction() override;
	virtual vector<string> Split(const string& sentence, char splitChar);

public:
	ReverseWordsInString() :
		ExecutableMenuItem("Reverse Words In A String") {};

};

