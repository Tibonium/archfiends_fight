/**
 * @file cagnazzo.h
 */

#ifndef CAGNAZZO_H
#define CAGNAZZO_H

class cagnazzo {

	private:

		unsigned _lvl = 49 ;
		unsigned _hp = 28000 ;
		unsigned _str = 44 ;
		unsigned _mag = 29 ;
		unsigned _def = 2 ;
		unsigned _mr = 48 ;
		double _eva = 0.5 ;
		
		bool phase ;
		
	public:

		bool phase_shift() {}
	
		int tsunami() {}
	
		int restore() {}

		int attack() {}
	
		bool guard() {}
		
		cagnazzo() {}

};

#endif
