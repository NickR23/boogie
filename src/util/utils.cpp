#include <util/utils.h>
#include <sstream>
#include <iomanip>

namespace utils {
    std::string toString(const uint32_t* data, size_t size) {
        std::stringstream ss;
        ss << std::hex << std::setfill('0'); // Set output to hexadecimal and pad with 0

        for (size_t i = 0; i < size; ++i) {
            uint32_t val = data[i];
            // Each uint32_t is 8 hex characters (4 bytes * 2 hex chars/byte)
            ss << std::setw(8) << val;
        }
        return ss.str();
    }
}
