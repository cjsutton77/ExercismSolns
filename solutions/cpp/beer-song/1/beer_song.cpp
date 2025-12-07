#include "beer_song.h"

namespace beer_song {

    std::string verse(int start) {
        std::stringstream ss;
        if (start > 1) {
            ss << start << " bottles of beer on the wall, " << start << " bottles of beer.\n" \
            << "Take one down and pass it around, " << start - 1 << " bottles of beer on the wall.\n" \
            ;
        } else if (start == 1) {
            ss << "1 bottle of beer on the wall, 1 bottle of beer.\n" \
            << "Take it down and pass it around, no more bottles of beer on the " \
            << "wall.";
        }
        else {
            ss << "No more bottles of beer on the wall, no more bottles of beer.\n" \
            << "Go to the store and buy some more, 99 bottles of beer on the wall.\n";
        }

        std::string formatted_string = ss.str();
        return formatted_string;
    }


    std::string sing(int start) {
        std::stringstream result;
        
        // Handle verses from start down to 2
        for (auto i = start; i > 1; i--) {
            result << i << " bottles of beer on the wall, " << i << " bottles of beer.\n" \
                   << "Take one down and pass it around, " << i - 1 << " bottles of beer on the wall.\n\n";
        }
        
        // Handle verse 1
        result << "1 bottle of beer on the wall, 1 bottle of beer.\n" \
               << "Take it down and pass it around, no more bottles of beer on the wall.\n\n";
        
        // Handle verse 0
        result << "No more bottles of beer on the wall, no more bottles of beer.\n" \
               << "Go to the store and buy some more, 99 bottles of beer on the wall.\n";

        return result.str();
    }


    std::string sing(int start, int end) {
        std::stringstream result;
        
        // Handle verses from start down to 2
        for (auto i = start; i >= end; i--) {
            result << i << " bottles of beer on the wall, " << i << " bottles of beer.\n"
                   << "Take one down and pass it around, " << i - 1 << " bottles of beer on the wall.\n";
            if (i != end) result << "\n";
        }
        
        return result.str();
    }


}  // namespace beer_song
