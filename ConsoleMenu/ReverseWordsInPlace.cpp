#include "stdafx.h"
#include "ReverseWordsInPlace.h"
#include <xutility>
#include <iostream>

using std::cout;
using std::endl;

void ReverseWordsInPlace::ExecuteFunction()
{
	string sentence = "the sky is blue";

	cout << "before: " << sentence << endl;


	ReverseEachWordInPlace(sentence);

	ReverseEntireSentence(sentence);

	
	cout << "after: " << sentence << endl;
}


void ReverseWordsInPlace::ReverseEachWordInPlace(string &sentence)
{
	string::size_type i = 0;
	for (string::size_type j = 0; j < sentence.length(); ++j)
	{
		if (sentence[j] == ' ')
		{
			Reverse(sentence, i, j - 1);
			i = j + 1;
		}
	}

	// reverse the last word.
	Reverse(sentence, i, sentence.length() - 1);
}

void ReverseWordsInPlace::ReverseEntireSentence(string &sentence)
{
	Reverse(sentence, 0, sentence.length() - 1);
}


void ReverseWordsInPlace::Reverse(string& sentence, string::size_type i, string::size_type j)
{
	while (i < j)
	{
		auto temp = sentence[i];
		sentence[i] = sentence[j];
		sentence[j] = temp;
		++i;
		--j;
	}
}