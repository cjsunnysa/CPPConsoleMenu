#pragma once
#include "ReverseWordsInString.h"
class ReverseWordsInStringStream :
	public ReverseWordsInString
{
protected:
	vector<string> Split(const string& sentence, char splitChar) override;
public:
	ReverseWordsInStringStream() :
		ReverseWordsInString("Reverse Words Using A StringStream") {};
};

