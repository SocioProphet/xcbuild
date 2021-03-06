/**
 Copyright (c) 2015-present, Facebook, Inc.
 All rights reserved.

 This source code is licensed under the BSD-style license found in the
 LICENSE file in the root directory of this source tree.
 */

#ifndef __xcdriver_Driver_h
#define __xcdriver_Driver_h

namespace libutil { class Filesystem; }
namespace process { class Context; }
namespace process { class Launcher; }
namespace process { class User; }

namespace xcdriver {

class Driver {
private:
    Driver();
    ~Driver();

public:
    static int
    Run(process::User const *user, process::Context const *processContext, process::Launcher *processLauncher, libutil::Filesystem *filesystem);
};

}

#endif // !__xcdriver_Driver_h
