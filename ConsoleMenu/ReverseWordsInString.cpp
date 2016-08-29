#include "stdafx.h"
#include "ReverseWordsInString.h"
#include <iostream>

using std::cout;
using std::endl;

void ReverseWordsInString::ExecuteFunction()
{
	cout << "before: " << SENTENCE << endl;

	
	auto words = Split(SENTENCE, ' ');

	std::reverse(words.begin(), words.end());

	
	cout << "after:" <<	ToString(words) << endl;
}

vector<string> ReverseWordsInString::Split(const string& sentence, char splitChar)
{
	vector<string> groups;
	
	string::size_type index = -1;
	string::size_type startIndex = 0;

	do
	{
		index = sentence.find_first_of(splitChar, startIndex);

		if (index > sentence.size())
		{
			groups.push_back(sentence.substr(startIndex)); 
			continue;
		}

		groups.push_back(sentence.substr(startIndex, index-startIndex));

		startIndex = index + 1;

	} while (index < sentence.size());

	return groups;
}

string ReverseWordsInString::ToString(vector<string>& words)
{
	string returnString;
	
	for (auto word : words)
		returnString += " " + word;

	return returnString;
}