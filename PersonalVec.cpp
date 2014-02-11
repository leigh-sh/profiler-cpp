#ifndef PERSONALVEC_HPP
#define PERSONALVEC_HPP

#include <vector>
#include <cassert>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>

template<class T, class PrnT>
class PersonalVec{

public:
	typedef size_t size_type;

	PersonalVec(){

	}

	void push_back(T element){
		_vec.push_back(element);
		srand(time(NULL));
		int r = rand()%_vec.size();
                std::swap(_vec[r], _vec[_vec.size()-1]);
	}

	void erase(size_type index){
		assert(index >= 0 && index < _vec.size());
		if(index != _vec.size() - 1){
                    std::swap(_vec[index], _vec[_vec.size() - 1]);
		}
		_vec.erase(_vec.end()-1);
	}

	const T& operator[](size_type index) const{
		assert(index >= 0 && index < _vec.size());
		return _vec[index];
	}

	T& operator[](size_type index){
		assert(index >= 0 && index < _vec.size());
		return _vec[index];
	}

	void print() const{
		for(size_type i=0; i<_vec.size(); ++i){
			std::cout << PrnT()(_vec[i]) << std::endl;
		}
	}

	size_type size(){
		return _vec.size();
	}

	~PersonalVec(){

	}

	
private:
    std::vector<T> _vec;
};


#endif
