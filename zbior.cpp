#include "zbior.h"
#include <new>
#include <random>

void Zbior::alokuj(int n)
{
	if (n > 0)
	{
		m_elementy = new(std::nothrow) double[n];
		m_liczbaElementow = n;
	}
}

void Zbior::zwolnij()
{
	if (m_elementy != nullptr)
	{
		delete[] m_elementy;
		m_elementy = nullptr;
	}
}

Zbior::Zbior(size_t liczElem, double dGran, double gGran)
{
	alokuj(liczElem);
	std::uniform_real_distribution<double> zakres(dGran, gGran);
	std::random_device generator;
	for (int elem = 0; elem < liczElem; elem++)
		m_elementy[elem] = zakres(generator);
}
// Konstruktor przenoszacy
Zbior::Zbior(Zbior&& other) 
	: m_liczbaElementow(other.m_liczbaElementow),
	m_elementy(other.m_elementy),
	m_dolnaGranica(other.m_dolnaGranica),
	m_gornaGranica(other.m_gornaGranica)
{
	other.m_liczbaElementow = 0;
	other.m_elementy = nullptr;
	other.m_dolnaGranica = 0;
	other.m_gornaGranica = 0;

}
Zbior::Zbior(const Zbior& other)
	: m_liczbaElementow(other.m_liczbaElementow),
	m_dolnaGranica(other.m_dolnaGranica),
	m_gornaGranica(other.m_gornaGranica)
{
	// Alokacja pamiêci
	alokuj(m_liczbaElementow);
	// Kopiowanie elementów
	for (size_t i = 0; i < m_liczbaElementow; ++i)
	{
		m_elementy[i] = other.m_elementy[i];
	}
}
// Operator przenoszenia 
Zbior& Zbior::operator=(Zbior&& other)
{
	if (this != &other)
	{
		zwolnij(); // Zwolnienie aktualnych zasobów

		// Przeniesienie pól
		m_liczbaElementow = other.m_liczbaElementow;
		m_elementy = other.m_elementy;
		m_dolnaGranica = other.m_dolnaGranica;
		m_gornaGranica = other.m_gornaGranica;

		// Ustawienie pól obiektu zrodlowego na wartosci domyœlne
		other.m_liczbaElementow = 0;
		other.m_elementy = nullptr;
		other.m_dolnaGranica = 0;
		other.m_gornaGranica = 0;
	}
	return *this;
}
// Operator przypisania kopiujacego 
Zbior& Zbior::operator=(const Zbior& other)
{
	if (this != &other)
	{
		zwolnij(); // Zwolnienie aktualnych zasobów

		// Kopiowanie pól
		m_liczbaElementow = other.m_liczbaElementow;
		m_dolnaGranica = other.m_dolnaGranica;
		m_gornaGranica = other.m_gornaGranica;

		// Alokacja nowych zasobów
		alokuj(m_liczbaElementow);

		// Kopiowanie elementów
		for (size_t i = 0; i < m_liczbaElementow; ++i)
		{
			m_elementy[i] = other.m_elementy[i];
		}
	}
	return *this;
}


Zbior:: operator double() const
{
	if (m_liczbaElementow == 0)
	{
		return 0.0;
	}
	//Kopiowanie elementów do tymaczasowej tablicy
	double* pomTab = new double[m_liczbaElementow];
	std::copy(m_elementy, m_elementy + m_liczbaElementow, pomTab);
	std::sort(pomTab, pomTab + m_liczbaElementow);
	double mediana;
	if (m_liczbaElementow % 2 == 0)
	{
		mediana = (pomTab[m_liczbaElementow / 2 - 1] + pomTab[m_liczbaElementow / 2]) / 2.0;
	}
	else
	{
		mediana = pomTab[m_liczbaElementow / 2];
	}
	//Zwolnienie pamieci
	delete[] pomTab;
	return mediana;
}