#include "idGenerator.h"
#include <iomanip>
#include <sstream>

template<char a, char b>
std::atomic<unsigned int> gpsshogi::IDGenerator<a, b>::counter;

template<char a, char b>
gpsshogi::
IDGenerator<a, b>::IDGenerator()
{
  std::ostringstream oss;
  oss << std::setfill('0') << std::setw(7) << counter++ << a << b;
  id.assign(oss.str());
}


// template instantiation

template class gpsshogi::IDGenerator<'S','N'>;
