#include "gigasecond.h"

namespace gigasecond {
boost::posix_time::ptime advance(boost::posix_time::ptime temp){
    boost::posix_time::seconds gs{1000000000};
    return temp + gs;
}
}  // namespace gigasecond
