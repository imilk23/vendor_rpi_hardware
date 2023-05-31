// FIXME: your file license if you have one

#include "Hello.h"

#include <vendor/hardware/hellocb/1.0/IHello.h>

using vendor::hardware::hellocb::V1_0::IHello;

namespace vendor {
namespace hardware {
namespace hellocb {
namespace V1_0 {
namespace implementation {

extern "C" IHello* HIDL_FETCH_IHello(const char* /* name */) {
    return new Hello();
}
}  // namespace implementation
}  // namespace V1_0
}  // namespace hellocb
}  // namespace hardware
}  // namespace vendor
