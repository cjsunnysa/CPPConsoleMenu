#pragma once
#include "ExecutableMenuItem.h"
class ReverseWordsInPlace :
	public ExecutableMenuItem
{
public:
	ReverseWordsInPlace() :
		ExecutableMenuItem("Reverse Words In A String In-Place") {};

protected:
	void ExecuteFunction() override;

private:
	void Reverse(string& sentence, string::size_type i, string::size_type j);
	void ReverseEachWordInPlace(string &sentence);
	void ReverseEntireSentence(string &sentence);

};

