#pragma once

#ifndef TABTENN0_H_
#define TABTENN0_H_
#include<string>
using std::string;

//simple base class
class TableTennisPlayer
{
private:
	string firstname;
	string lastname;
	bool hasTable;
public:
	TableTennisPlayer(const string& fn = "none",
		const string& ln = "none", bool ht = false);
	void Name()const;
	bool HasTable()const { return hasTable; };
	void ResetTable(bool v) { hasTable = v; };

};

//simple derived class
class RatePlayer :public TableTennisPlayer
{
private:
	unsigned int rating;
public:
	RatePlayer(unsigned int r = 0, const string& fn = "none",
		const string& ln = "none", bool ht = false);
	RatePlayer(unsigned int r, const TableTennisPlayer& tp);
	unsigned int Rating()const { return rating; }
	void ResetRating(unsigned int r) { rating = r; }
};


#endif // !TABTENN0_H_
