#ifndef GPSSHOGI_IDGENERATOR_H
#define GPSSHOGI_IDGENERATOR_H

#include <atomic>
#include <string>

namespace gpsshogi
{
  template<char a, char b>
  class IDGenerator
  {
    static std::atomic<unsigned int> counter;

    std::string id;

  public:
    IDGenerator();
    std::string str() const {return id;}
  };
}

#endif /* GPSSHOGI_IDGenerator_H */
// ;;; Local Variables:
// ;;; mode:c++
// ;;; c-basic-offset:2
// ;;; End:
