// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// tset.cpp - Copyright (c) Гергель В.П. 04.10.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (19.04.2015)
//
// Множество - реализация через битовые поля

#include<conio.h>
#include "tset.h"
#include <Windows.h>

TSet::TSet(int mp = 1) : BitField(mp)
{
	MaxPower = mp;
}

// конструктор копирования
TSet::TSet(const TSet &s) : BitField(s.MaxPower)
{
	BitField = s.BitField;
	MaxPower = s.MaxPower;
}

// конструктор преобразования типа
TSet::TSet(const TBitField &bf) : BitField(bf.GetLength())
{
	MaxPower = bf.GetLength();
}
/*
TSet::operator TBitField()
{
	return BitField;
}

int TSet::GetMaxPower(void) const // получить макс. к-во эл-тов
{
	return MaxPower;
}

int TSet::IsMember(const int Elem) const // элемент множества?
{
	return BitField.GetBit(Elem);
}

void TSet::InsElem(const int Elem) // включение элемента множества
{
	BitField.SetBit(Elem);
}

void TSet::DelElem(const int Elem) // исключение элемента множества
{
	BitField.ClrBit(Elem);
}

// теоретико-множественные операции

TSet& TSet::operator=(const TSet &s) // присваивание
{
	BitField = s.BitField;
	MaxPower = s.MaxPower;

	return *this;
}

bool TSet::operator==(const TSet &s) const // сравнение
{
	if (MaxPower == s.MaxPower) 
	{
		if (BitField == s.BitField)
		{
			return 1;
		}
	}

	return 0;
}

bool TSet::operator!=(const TSet &s) const // сравнение
{
	if (MaxPower == s.MaxPower) 
	{
		if (BitField == s.BitField)
		{
			return 0;
		}
	}

	return 1;
}

TSet TSet::operator+(const TSet &s) // объединение
{
	TSet temp;
	temp.BitField = BitField | s.BitField;
	temp.MaxPower = temp.BitField.GetLength();

	return temp;
}

TSet TSet::operator+(const int Elem) // объединение с элементом
{
	if (Elem > MaxPower) 
	{
		throw "Out of range";
	}

	TSet temp(MaxPower);
	BitField.SetBit(Elem);
	temp.BitField = BitField;
	temp.MaxPower = GetMaxPower();

	return temp;
}

TSet TSet::operator-(const int Elem) // разность с элементом
{
	if (Elem > MaxPower) 
	{
		throw "Out of range";
	}

	TSet temp(MaxPower);
	BitField.ClrBit(Elem);
	temp.BitField = BitField;
	temp.MaxPower = GetMaxPower();

	return temp;
}

TSet TSet::operator*(const TSet &s) // пересечение
{
	TSet temp;
	temp.BitField = BitField & s.BitField;
	temp.MaxPower = temp.BitField.GetLength();

	return temp;
}

TSet TSet::operator~(void) // дополнение
{
	BitField = ~BitField;

	return *this;
}

// перегрузка ввода/вывода

istream &operator>>(istream &istr, TSet &s) // ввод
{
	int a;
	while (true) 
	{
		cin >> a;
		s.InsElem(a);

		if (a = _getch() == 13) 
		{
			break;
		}

		a = 0; 

	}

	return istr;
}

ostream& operator<<(ostream &ostr, const TSet &s) // вывод
{
	ostr << "{";
	for (size_t i = 0; i < s.MaxPower; i++) 
	{
		if (s.IsMember(i))
		{
			ostr << i << " ";
		}
	}

	ostr << "}";

	return ostr;
}
*/