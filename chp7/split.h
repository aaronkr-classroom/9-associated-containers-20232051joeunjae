#pragma once
#ifndef GUARD_spilt_h
#define GUARD_spilt_h

#include <algorithm> //find_if
#include <cctype>// isspace
#include <string>
#include <vector>
#include <iostream>
using namespace std;

//인수가 공백일때는 true 그렇지 않을 경우 false
bool space(char);


//인수가 공백일때는 false 그렇지 않을 경우 true
bool  not_space(char);

vector<string>split(const string&);





#endif