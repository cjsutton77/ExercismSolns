#include "secret_handshake.h"

#include <iostream>
// ```plaintext
// 00001 = wink
// 00010 = double blink
// 00100 = close your eyes
// 01000 = jump
// 10000 = Reverse the order of the operations in the secret handshake.
// ```
namespace secret_handshake {

    std::vector<std::string> commands(int code){
        std::vector<std::string> output;
        if (code == 1) output.emplace_back("wink");
        else if (code == 0 || code == 16) return output;
        else {
            std::vector<int> codes = {};
            for (auto i = 0; i < 5; i++) {
                codes.emplace_back(code % 2);
                code = code / 2;
            }
            std::reverse(codes.begin(), codes.end());
            if (codes.at(4) == 1) output.emplace_back("wink");
            if (codes.at(3) == 1) output.emplace_back("double blink");
            if (codes.at(2) == 1) output.emplace_back("close your eyes");
            if (codes.at(1) == 1) output.emplace_back("jump");
            if (codes.at(0) == 1) {
                std::reverse(output.begin(), output.end());
            }
        }
        return output;
    }

}  // namespace secret_handshake
