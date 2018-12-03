#ifndef BODY

#define BODY
#include "Body.h"
#endif // !




class LuxuryBody :public Body {
public:
	LuxuryBody() :Body("LuxuryBody", 100) {}
};