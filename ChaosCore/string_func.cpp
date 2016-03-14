//
//  string_func.cpp
//  ChaosCore
//
//  Created by Fu Lam Diep on 13.03.16.
//  Copyright © 2016 Fu Lam Diep. All rights reserved.
//

#include "string_func.hpp"

namespace std {
//	const char* to_string (list<bool> l)
//	{
//	list<bool>::iterator it = l.begin();
//	list<bool>::iterator end = l.end();
//	char* s;
//	if (it != end) sprintf(s, "%i", *it++);
//	else return "";
//	while (it != l.end()) sprintf(s, "%s, %i", s, *it++);
//	return s;
//	}
//	
//	
//	const char* to_string (list<char> l)
//	{
//	list<char>::iterator it = l.begin();
//	list<char>::iterator end = l.end();
//	char* s;
//	if (it != end) sprintf(s, "%i", *it++);
//	else return "";
//	while (it != l.end()) sprintf(s, "%s, %i", s, *it++);
//	return s;
//	}
//	
//	
//	const char* to_string (list<unsigned char> l)
//	{
//	list<unsigned char>::iterator it = l.begin();
//	list<unsigned char>::iterator end = l.end();
//	char* s;
//	if (it != end) sprintf(s, "%i", *it++);
//	else return "";
//	while (it != l.end()) sprintf(s, "%s, %i", s, *it++);
//	return s;
//	}
//	
//	
//	const char* to_string (list<short> l)
//	{
//	list<short>::iterator it = l.begin();
//	list<short>::iterator end = l.end();
//	char* s;
//	if (it != end) sprintf(s, "%i", *it++);
//	else return "";
//	while (it != l.end()) sprintf(s, "%s, %i", s, *it++);
//	return s;
//	}
//	
//	
//	const char* to_string (list<unsigned short> l)
//	{
//	list<unsigned short>::iterator it = l.begin();
//	list<unsigned short>::iterator end = l.end();
//	char* s;
//	if (it != end) sprintf(s, "%i", *it++);
//	else return "";
//	while (it != l.end()) sprintf(s, "%s, %i", s, *it++);
//	return s;
//	}
//	
//	
//	const char* to_string (list<int> l)
//	{
//	list<int>::iterator it = l.begin();
//	list<int>::iterator end = l.end();
//	char* s;
//	if (it != end) sprintf(s, "%i", *it++);
//	else return "";
//	while (it != l.end()) sprintf(s, "%s, %i", s, *it++);
//	return s;
//	}
//	
//	
//	const char* to_string (list<unsigned int> l)
//	{
//	list<unsigned int>::iterator it = l.begin();
//	list<unsigned int>::iterator end = l.end();
//	char* s;
//	if (it != end) sprintf(s, "%i", *it++);
//	else return "";
//	while (it != l.end()) sprintf(s, "%s, %i", s, *it++);
//	return s;
//	}
//	
//	
//	const char* to_string (list<long> l)
//	{
//	list<long>::iterator it = l.begin();
//	list<long>::iterator end = l.end();
//	char* s;
//	if (it != end) sprintf(s, "%lu", *it++);
//	else return "";
//	while (it != l.end()) sprintf(s, "%s, %lu", s, *it++);
//	return s;
//	}
//	
//	
//	const char* to_string (list<unsigned long> l)
//	{
//	list<unsigned long>::iterator it = l.begin();
//	list<unsigned long>::iterator end = l.end();
//	char* s;
//	if (it != end) sprintf(s, "%lu", *it++);
//	else return "";
//	while (it != l.end()) sprintf(s, "%s, %lu", s, *it++);
//	return s;
//	}
//	
//	
//	const char* to_string (list<float> l)
//	{
//	list<float>::iterator it = l.begin();
//	list<float>::iterator end = l.end();
//	char* s;
//	if (it != end) sprintf(s, "%f", *it++);
//	else return "";
//	while (it != l.end()) sprintf(s, "%s, %f", s, *it++);
//	return s;
//	}
//	
//	
//	const char* to_string (list<double> l)
//	{
//	list<double>::iterator it = l.begin();
//	list<double>::iterator end = l.end();
//	char* s;
//	if (it != end) sprintf(s, "%f", *it++);
//	else return "";
//	while (it != l.end()) sprintf(s, "%s, %f", s, *it++);
//	return s;
//	}
//	
//	
//	const char* to_string (vector<bool> vec)
//	{
//	vector<bool>::iterator it = vec.begin();
//	vector<bool>::iterator end = vec.end();
//	char* s;
//	if (it != end) sprintf(s, "%i", *it++);
//	else return "";
//	while (it != vec.end()) sprintf(s, "%s, %i", s, *it++);
//	return s;
//	}
//	
//	
//	const char* to_string (vector<char> vec)
//	{
//	vector<char>::iterator it = vec.begin();
//	vector<char>::iterator end = vec.end();
//	char* s;
//	if (it != end) sprintf(s, "%i", *it++);
//	else return "";
//	while (it != vec.end()) sprintf(s, "%s, %i", s, *it++);
//	return s;
//	}
//	
//	
//	const char* to_string (vector<unsigned char> vec)
//	{
//	vector<unsigned char>::iterator it = vec.begin();
//	vector<unsigned char>::iterator end = vec.end();
//	char* s;
//	if (it != end) sprintf(s, "%i", *it++);
//	else return "";
//	while (it != vec.end()) sprintf(s, "%s, %i", s, *it++);
//	return s;
//	}
//	
//	
//	const char* to_string (vector<short> vec)
//	{
//	vector<short>::iterator it = vec.begin();
//	vector<short>::iterator end = vec.end();
//	char* s;
//	if (it != end) sprintf(s, "%i", *it++);
//	else return "";
//	while (it != vec.end()) sprintf(s, "%s, %i", s, *it++);
//	return s;
//	}
//	
//	
//	const char* to_string (vector<unsigned short> vec)
//	{
//	vector<unsigned short>::iterator it = vec.begin();
//	vector<unsigned short>::iterator end = vec.end();
//	char* s;
//	if (it != end) sprintf(s, "%i", *it++);
//	else return "";
//	while (it != vec.end()) sprintf(s, "%s, %i", s, *it++);
//	return s;
//	}
//	
//	
//	const char* to_string (vector<int> vec)
//	{
//	vector<int>::iterator it = vec.begin();
//	vector<int>::iterator end = vec.end();
//	char* s;
//	if (it != end) sprintf(s, "%i", *it++);
//	else return "";
//	while (it != vec.end()) sprintf(s, "%s, %i", s, *it++);
//	return s;
//	}
//	
//	
//	const char* to_string (vector<unsigned int> vec)
//	{
//	vector<unsigned int>::iterator it = vec.begin();
//	vector<unsigned int>::iterator end = vec.end();
//	char* s;
//	if (it != end) sprintf(s, "%i", *it++);
//	else return "";
//	while (it != vec.end()) sprintf(s, "%s, %i", s, *it++);
//	return s;
//	}
//	
//	
//	const char* to_string (vector<long> vec)
//	{
//	vector<long>::iterator it = vec.begin();
//	vector<long>::iterator end = vec.end();
//	char* s;
//	if (it != end) sprintf(s, "%lu", *it++);
//	else return "";
//	while (it != vec.end()) sprintf(s, "%s, %lu", s, *it++);
//	return s;
//	}
//	
//	
//	const char* to_string (vector<unsigned long> vec)
//	{
//	vector<unsigned long>::iterator it = vec.begin();
//	vector<unsigned long>::iterator end = vec.end();
//	char* s;
//	if (it != end) sprintf(s, "%lu", *it++);
//	else return "";
//	while (it != vec.end()) sprintf(s, "%s, %lu", s, *it++);
//	return s;
//	}
//	
//	
//	const char* to_string (vector<float> vec)
//	{
//	vector<float>::iterator it = vec.begin();
//	vector<float>::iterator end = vec.end();
//	char* s;
//	if (it != end) sprintf(s, "%f", *it++);
//	else return "";
//	while (it != vec.end()) sprintf(s, "%s, %f", s, *it++);
//	return s;
//	}
//	
//	
//	const char* to_string (vector<double> vec)
//	{
//	vector<double>::iterator it = vec.begin();
//	vector<double>::iterator end = vec.end();
//	char* s;
//	if (it != end) sprintf(s, "%f", *it++);
//	else return "";
//	while (it != vec.end()) sprintf(s, "%s, %f", s, *it++);
//	return s;
//	}
}