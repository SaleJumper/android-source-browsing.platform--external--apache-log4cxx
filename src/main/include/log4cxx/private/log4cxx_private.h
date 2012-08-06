// Added to make the code easier to compile on multiple platforms

#ifdef WIN32
#include "log4cxx_private.hw"
#elif defined(__APPLE__)
#include "log4cxx_private_mac.h"
#else
#include "log4cxx_private_linux.h"
#endif
