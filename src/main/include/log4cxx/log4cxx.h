// Added by to make the code easier to compile on multiple platforms

#ifdef WIN32
#include <log4cxx/log4cxx.hw>
#elif defined(__APPLE__)
#include <log4cxx/log4cxx_mac.h>
#else
#include <log4cxx/log4cxx_linux.h>
#endif
