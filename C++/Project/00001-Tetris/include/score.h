/*************************************************************************
    > File Name: include/score.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#ifndef SCORE_H
#define SCORE_H

#include<iostream>
#include<string>

using namespace std;

class Score
{
	string player;
	int score;
public:
	Score()
	{
		player = "lwei2";
		score = 0;
	}
	void setName(string name)
	{
		player = name;
	}
	void setScore(int s)
	{
		score = s;
	}
	void printMessage();
};

#endif //

