#pragma once

#include <iostream>
#include <numeric>

template<typename T> 
class complex_number {
private:
    T m_re, m_im;

public:
    
    complex_number() : m_re(0), m_im(0) {}
    
    /* Costruttore user-defined */
    complex_number(T re, T im) : m_re(re), m_im(im) {
        
    }

    /* Restituisce perte reale */
    T re() const { return m_re; }
    
    /* Restituisce parte immaginaria */
    T im() const { return m_im; }
    
    /* Operatore += */
    complex_number& operator+=(const complex_number& other) {
        m_re = m_re + other.m_re ;
        m_im = m_im + other.m_im;
        return *this;
    }
    
    /* Operatore + */
    complex_number operator+(const complex_number& other) const {
        complex_number result_on_first = *this; 
        result_on_first += other;
        return result_on_first;
    }
    
    
	
	
	
	
	
	/* Operatore *= */
    complex_number& operator*=(const complex_number& other) {
        T new_re = m_re*other.m_re-m_im*other.m_im;
        T new_im = other.m_im*m_re +m_im*other.m_re;
        m_re=new_re;
		m_im=new_im;
        return *this;
    }
    
    /* Operatore * */
    complex_number operator*(const complex_number& other) const {
        complex_number result = *this;
        result *= other;
        return result;
    }
    
	/* Operatore coniugato */
	complex_number coniugate() const {
        return complex_number(m_re, -m_im);
    }
};
template<typename T>
std::ostream& operator<<(std::ostream& os, const complex_number<T>& r) {
    if (r.im() == 0) {
        os << r.re();
    } else if (r.im() > 0) {
        os << r.re() << " + " << r.im() << "i";
    } else {
        os << r.re() << " - " << -r.im() << "i"; 
    }
    return os;
}
