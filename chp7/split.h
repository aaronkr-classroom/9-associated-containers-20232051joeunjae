#pragma once
#ifndef GUARD_spilt_h
#define GUARD_spilt_h

#include <algorithm> //find_if
#include <cctype>// isspace
#include <string>
#include <vector>
#include <iostream>
using namespace std;

//�μ��� �����϶��� true �׷��� ���� ��� false
bool space(char);


//�μ��� �����϶��� false �׷��� ���� ��� true
bool  not_space(char);

vector<string>split(const string&);





#endif