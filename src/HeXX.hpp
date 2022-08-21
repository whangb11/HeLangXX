#ifndef _HeXX_INCLUDED

#define _HEXX_INCLUDED
#define __CYBERSPACE_BEGIN namespace CyberSpace {
#define __CYBERSPACE_END }
#include<iostream>
#include<vector>
#include<iterator>

__CYBERSPACE_BEGIN
	
#define CYBER_SUCCESS 0
#define CYBER_FAILURE 1
#define CYBER_DINZHEN "https://space.bilibili.com/163637592"

	template <typename T> struct u8 {
	public:
		u8(size_t num) {
			value = std::vector<T>(num);
			_begin = value.begin();
			_end = value.end();
		}

		u8(size_t num, T index) {
			value = std::vector<T>(num, index);
			_begin = value.begin();
			_end = value.end();
		}

		u8(std::initializer_list<T> initlist) {
			value = initlist;
			_begin = value.begin();
			_end = value.end();
		}

		T& operator[](size_t index) {
			return value[index - 1];
		}

		u8<T> operator++(int) {
			u8<T> tmp = *this;
			for (int i = 1; i <= this->size(); i++) {
				(*this)[i] ++;
			}
			return tmp;
		}

		u8<T> operator++() {
			for (int i = 1; i <= this->size(); i++) {
				(*this)[i] ++;
			}
			return *this;
		}

		u8<T> operator--(int) {
			u8<T> tmp = *this;
			for (int i = 1; i <= this->size(); i++) {
				(*this)[i] --;
			}
			return tmp;
		}

		u8<T> operator--() {
			for (int i = 1; i <= this->size(); i++) {
				(*this)[i] --;
			}
			return *this;
		}

		/*
			u8<T&> operator[](u8<size_t> indexes) {
				u8<T&> result = {};
				for (int i = 1; i <= indexes.size(); i++) {
					T& tmp = *this[i];
					result.push_back(tmp);
				}
				return result;
			}
		*/

		u8<T> operator=(T rp) {
			for (int i = 1; i <= value.size(); i++) {
				*this[i] = rp;
			}
			return *this;
		}

		u8<T> operator+(T rp) {
			u8<T> tmp = *this;
			for (int i = 1; i <= this->size(); i++) {
				tmp[i] += rp;
			}
			return tmp;
		}

		u8<T> operator-(T rp) {
			u8<T> tmp = *this;
			for (int i = 1; i <= this->size(); i++) {
				tmp[i] -= rp;
			}
			return tmp;
		}

		u8<T> operator*(T rp) {
			u8<T> tmp = *this;
			for (int i = 1; i <= this->size(); i++) {
				tmp[i] = tmp[i] * rp;
			}
			return tmp;
		}

		u8<T> operator*(u8<T> rp) {
			u8<T> tmp = *this;
			u8<T> result = {};
			while (tmp.size() != rp.size()) {
				if (tmp.size() < rp.size()) {
					tmp.push_back(T(0));
				}
				else {
					rp.push_back(T(0));
				}
			}
			for (int i = 1; i <= rp.size(); i++) {
				result.push_back(tmp[i] * rp[i]);
			}
			return result;
		}

		u8<T> operator/(T rp) {
			u8<T> tmp = *this;
			for (int i = 1; i <= this->size(); i++) {
				tmp[i] = tmp[i] / rp;
			}
			return tmp;
		}

		inline size_t size() {
			return value.size();
		}

		void push_back(T p) {
			value.push_back(p);
		}

		void powerCon(u8<size_t> location, T value) {
			for (int i = 1; i <= location.size(); i++) {
				(* this)[location[i]] = value;
			}
		}

		struct iterator {
		public:
			iterator() {

			}
		};


		std::vector<T> value;

		//WIP
		std::vector<T>::iterator _begin;
		std::vector<T>::iterator _end;
	};

	template<typename T> u8<T> operator|(u8<T> lp, T rp) {
		lp.push_back(rp);
		return lp;
	}

	template<typename T> u8<T> operator|(T lp, u8<T> rp) {
		rp.push_back(lp);
		return rp;
	}

	template<typename T> u8<T> operator|(u8<T> lp, u8<T> rp) {
		for (int i = 1; i <= rp.size(); i++) {
			lp.push_back(rp[i]);
		}
		return lp;
	}

	template<typename T> std::ostream& operator<<(std::ostream& o, u8<T> v) {
		for (int i = 1; i <= v.size(); i++) {
			o << v[i] << " | ";
		}
		return o;
	}
__CYBERSPACE_END

#endif
