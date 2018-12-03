#ifndef SIMPLE_BODY

#define SIMPLE_BODY
#include "Body.h"


class SimpleBody :public Body {
public:
	SimpleBody() :Body("SimpleBody", 75) {}
};
#endif // !