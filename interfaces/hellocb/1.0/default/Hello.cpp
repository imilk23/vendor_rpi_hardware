// FIXME: your file license if you have one

#include "Hello.h"

namespace vendor {
namespace hardware {
namespace hellocb {
namespace V1_0 {
namespace implementation {

sp<IHelloCallback> mCallback = nullptr;

// Methods from ::vendor::hardware::hellocb::V1_0::IHello follow.
Return<void> Hello::init() {
    // TODO implement
    return Void();
}

Return<void> Hello::release() {
    // TODO implement
    return Void();
}

Return<void> Hello::setCallback(const sp<::vendor::hardware::hellocb::V1_0::IHelloCallback>& cb) {
    mCallback = cb;
    cb->onNotify(100);
    return Void();
}

// Methods from ::android::hidl::base::V1_0::IBase follow.

}  // namespace implementation
}  // namespace V1_0
}  // namespace hellocb
}  // namespace hardware
}  // namespace vendor
