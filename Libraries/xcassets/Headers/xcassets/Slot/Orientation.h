/**
 Copyright (c) 2015-present, Facebook, Inc.
 All rights reserved.

 This source code is licensed under the BSD-style license found in the
 LICENSE file in the root directory of this source tree.
 */

#ifndef __xcassets_Slot_Orientation_h
#define __xcassets_Slot_Orientation_h

#include <ext/optional>
#include <string>

namespace xcassets {
namespace Slot {

/*
 * Physical device orientation class.
 */
enum class Orientation {
    Portrait,
    Landscape,
};

class Orientations {
private:
    Orientations();
    ~Orientations();

public:
    /*
     * Parse an orientation from a string, if valid.
     */
    static ext::optional<Orientation>
    Parse(std::string const &value);

    /*
     * Convert an orientation to a string.
     */
    static std::string String(Orientation orientation);
};

}
}

#endif // !__xcassets_Slot_Orientation_h
