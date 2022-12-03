/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 21:20:37 by eleotard          #+#    #+#             */
/*   Updated: 2022/12/03 18:02:47 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class Array
{
	public:
		Array<T>() : _n(0) {
			_array = NULL;
		}
		Array<T>(unsigned int n) : _n(n) {
			_array = new T[n];
		}
		Array<T>(Array const& copy) : _n(0) {
			*this = copy;
		}
		~Array<T>()	{
			delete[] _array;
		}
		Array<T> const&operator=(Array<T> const& src) { //deux 0
			unsigned int i;
			
			if (src._n == 0 && this->_n == 0)
				return (*this);
			else if (src._n == 0 && this->_n > 0) {
				delete[] _array;
				_array = NULL;
				_n = src._n;
				return (*this);
			}
			else if (src._n > 0 && this->_n == 0)
				_array = new T[src._n];
			else if (src._n > 0 && this->_n > 0) {
				delete[] _array;
				_array = new T[src._n];
			}
			_n = src._n;
			i = -1;
			while (++i < src._n)
				_array[i] = src._array[i];
			return (*this);
		}

		T& operator[](T index) const {
			if (static_cast<unsigned int>(index) >= _n) {
				std::cout << "Array index out of bound, exiting" << std::endl;
				throw std::exception();
			}
			return (_array[index]);
		}
		
		T *getArray() const {
			return (_array);
		}
		void	print_array() const {
			unsigned int i;
			
			i = -1;
			while (++i < _n)
				std::cout << _array[i] << std::endl;
		}
		unsigned int size() const {
			return (_n);
		}
		
	private:
		T *_array;
		unsigned int _n;
		
};

#endif