#include <string>
#include <sstream>
#include <iostream>
#include "PersonalVec.hpp"

#define SQRTY 6000 //Square root of Y

struct Prn {
    std::string operator() (int num) const {
        std::stringstream tempstr;
        tempstr << num;
        return tempstr.str();
    }
};

void a1(PersonalVec<int, Prn> &v){
	for(int i=0; i<SQRTY; ++i){
		for(int j=0; j<SQRTY; ++j){
			v.push_back(1);
		}
	}
}

void a2(std::vector<int> &v2){
	for(int i=0; i<SQRTY; ++i){
		for(int j=0; j<SQRTY; ++j){
			v2.push_back(1);
		}
	}
}

int main(){
	PersonalVec<int, Prn> v;
	std::vector<int> v2;
	a1(v);
	a2(v2);
	return 0;
}
