/*
 * address.cpp
 *
 *  Created on: 2017¦~12¤ë21¤é
 *      Author: kchengad
 */

#include "address.h"
using namespace std;

static bool Address::parse_arg(const vector<string>& arguments){
	if(arguments.size() == 3 && arguments[0] == "add"){
		return add_entry(arguments[1],strtoint(arguments[2]).first);
	}else if(arguments.size() == 3 && arguments[0] == "chg"){
		return chg_entry(&(int)strtoint(arguments[1],true).first,strtoint(arguments[2]).first);
	}else if(arguments.size() == 2 && arguments[0] == "del"){
		return del_entry(&(int)strtoint(arguments[1],true).first);
	}
	else
		return false;
}

static bool Address::add_entry(const string& name, const int& value){
	entries.push_back()
	return true;
}

static bool Address::chg_entry(int* address, const int& value){
	return true;
}

static bool Address::del_entry(int* address){
	return true;
}

static void Address::print_data(){

}

