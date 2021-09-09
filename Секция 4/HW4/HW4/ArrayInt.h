#pragma once
#ifndef ARRAYINT_H
#define ARRAYINT_H

#include <cassert>

class ArrayInt
{
private:
	int m_length;
	int* m_data;
public:
	ArrayInt() : m_length(0), m_data(nullptr) 
	{
	}
	ArrayInt(int len) : m_length(len)
	{
		assert(len >= 0);
		if (len > 0)
		{
			m_data = new int[len];
		}
		else
		{
			m_data = nullptr;
		}
	}
	~ArrayInt()
	{
		delete[] m_data;
	}

	void erase()
	{
		delete[] m_data;
		m_data = nullptr;
		m_length = 0;
	}
	int getLenght()
	{
		return m_length;
	}
	int& operator[](int index)
	{
		assert(index >= 0 && index < m_length);
		return m_data[index];
	}
	void resize(int newLength)
	{
		if (newLength == m_length)
			return;
		if (newLength <= 0)
		{
			erase();
			return;
		}
		int* data = new int[newLength];
		if (m_length > 0)
		{
			int elementsToCopy = (newLength > m_length) ? m_length : newLength;
			for (int index = 0; index < elementsToCopy; ++index)
				data[index] = m_data[index];
		}
		delete[] m_data;
		m_data = data;
		m_length = newLength;
	}
	void insertBefore(int value, int index)
	{
		assert(index >= 0 && index <= m_length);
		int* data = new int[m_length + 1];
		for (int before = 0; before < index; ++before)
			data[before] = m_data[before];
		data[index] = value;
		for (int after = index; after < m_length; ++after)
			data[after + 1] = m_data[after];
		delete[] m_data;
		m_data = data;
		++m_length;
	}
	void push_back(int value)
	{
		insertBefore(value, m_length);
	}
	//pop_back()
	void pop_back()
	{
		if (m_length <= 0)
		{
			std::cout << "Error, array lenght is 0";
			return;
		}
		int* data = new int[m_length - 1];
		for (int i = 0; i < (m_length - 1); i++)
		{

		}

	}
	//pop_front()
	//для сортировки массива
	//для вывода на экран элементов
};
#endif