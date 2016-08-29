#include "stdafx.h"
#include "ReverseWordsInStringStream.h"
#include <sstream>

using std::stringstream;
using std::getline;

vector<string> ReverseWordsInStringStream::Split(const string& sentence, char splitChar)
{
	stringstream sentenceStream(sentence);
	vector<string> words;
	string word;

	while (getline(sentenceStream, word, ' '))
		words.push_back(word);

	return words;
}