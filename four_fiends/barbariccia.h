/**
 * @file barbariccia.h
 */

#ifndef BARBARICCIA_H
#define BARBARICCIA_H

class barbariccia {

	private:
	
		unsigned _lvl = 50 ;
		unsigned _hp = 28000 ;
		unsigned _str = 82 ;
		unsigned _mag = 63 ;
		unsigned _def = 0 ;
		unsigned _mr = 12 ;
		double _eva = 0 ;
		
		bool phase ;
		
	public:
	
		bool phase_shift() {}

		bool glare() {}
	
		int maelstorm() {}

		int attack() {}
	
		bool guard() {}

		barbariccia() {}
	
};

#endif
