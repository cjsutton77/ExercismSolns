#include <string>

namespace log_line {
std::string log_level(const std::string log)
{
    int s = log.find("[");
    int e = log.find("]");
    int l = e - s -1;
    return log.substr(s+1,l);
}

std::string message(const std::string log)
{
    int s = log.find(":");
    return log.substr(s+2);
}

std::string reformat(const std::string log)
{
    int s_l = log.find("[");
    int e_l = log.find("]");
    int s_m = log.find(":");
    int l = e_l - s_l -1;
    std::string msg = log.substr(s_m+2);
    std::string lvl = log.substr(s_l+1,l);
    return msg + " (" + lvl +")";
}
} // namespace log_line
