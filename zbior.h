#pragma once
class Zbior
{
	size_t m_liczbaElementow = 0;
	double* m_elementy = nullptr;
	double m_dolnaGranica = 0;
	double m_gornaGranica = 0;
	void alokuj(int);
	void zwolnij();
public:
	Zbior(size_t liczElem, double dGran, double gGran);
	Zbior(Zbior&& other);
	// Konstruktor kopiuj¹cy
	Zbior(const Zbior& other);
	// Operator przypisania kopiuj¹cego
	Zbior& operator=(const Zbior& other);
	operator double() const;
	// Operator przypisania przenosz¹cego
	Zbior& operator=(Zbior&& other);
	double getGorna() const
	{
		return m_gornaGranica;
	}
	~Zbior() { zwolnij(); }

	
};

