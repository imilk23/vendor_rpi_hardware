// FIXME: your file license if you have one

#pragma once

#include <vendor/hardware/hellocb/1.0/IHello.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>

namespace vendor {
namespace hardware {
namespace hellocb {
namespace V1_0 {
namespace implementation {

using ::android::hardware::hidl_array;
using ::android::hardware::hidl_memory;
using ::android::hardware::hidl_string;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;

struct Hello : public IHello {
    // Methods from ::vendor::hardware::hellocb::V1_0::IHello follow.
    Return<void> init() override;
    Return<void> release() override;
    Return<void> setCallback(const sp<::vendor::hardware::hellocb::V1_0::IHelloCallback>& cb) override;

    // Methods from ::android::hidl::base::V1_0::IBase follow.
};

}  // namespace implementation
}  // namespace V1_0
}  // namespace hellocb
}  // namespace hardware
}  // namespace vendor
