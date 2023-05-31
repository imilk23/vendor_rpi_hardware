#define LOG_TAG "vendor.hardware.hellocb@1.0-service"

#include <vendor/hardware/hellocb/1.0/IHello.h>

#include <hidl/LegacySupport.h>
#include <log/log.h>

using vendor::hardware::hellocb::V1_0::IHello;
using android::hardware::defaultPassthroughServiceImplementation;

int main() {
    return defaultPassthroughServiceImplementation<IHello>();
}