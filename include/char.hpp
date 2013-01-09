#ifndef TERMINATE_CHAR_HPP
#define TERMINATE_CHAR_HPP


#include <SDL/SDL.h>


namespace Term
	{


	typedef SDL_Color Color;

	class Char
		{
		public:
			Char();
			char GetChar() const;
			void SetChar( char );

			void SetPriColor( Color );
			Color GetPriColor() const;
			void SetSecColor( Color );
			Color GetSecColor() const;
		private:
			char c;
			Color priColor;
			Color secColor;
		};

	} // namespace Term

#endif //TERMINATE_CHAR_HPP