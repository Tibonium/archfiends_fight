/**
 * @file scarmiglione.h
 */

#ifndef SCARMIGLIONE_H
#define SCARMIGLIONE_H

class scarmiglione {

	private:
	
		unsigned _lvl = 48 ;
		unsigned _hp = 28000 ;
		unsigned _str = 46 ;
		unsigned _mag = 31 ;
		unsigned _def = 1 ;
		unsigned _mr = 22 ;
		double _eva = 0 ;
		
		bool phase ;
		
	public:
	
		bool phase_shift() {}
	
		bool curse() {}
	
		int attack() {}
	
		bool guard() {}
	
		scarmiglione() {}
		
};

#endif
