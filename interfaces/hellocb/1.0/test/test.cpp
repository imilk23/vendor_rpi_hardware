#include <hidl/Status.h>
#include <hidl/LegacySupport.h>
#include <utils/misc.h>
#include <hidl/HidlSupport.h>

#include <vendor/hardware/hellocb/1.0/IHello.h>
#include <vendor/hardware/hellocb/1.0/IHelloCallback.h>

using vendor::hardware::hellocb::V1_0::IHello;
using vendor::hardware::hellocb::V1_0::IHelloCallback;
using ::android::hardware::hidl_array;
using ::android::hardware::hidl_memory;
using ::android::hardware::hidl_string;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;

struct HelloCallback : public IHelloCallback {
public:
    HelloCallback(){};
    ~HelloCallback(){};

    Return<void> onNotify(int32_t event) {
        printf("onNotify: value = %d\n", event);
        return Void();
    }
};

int main()
{
    android::sp<IHello> service = IHello::getService();
    if(service == nullptr) {
        printf("Failed to get service\n");
        return -1;
    }

    sp<IHelloCallback> cb = new HelloCallback();
    service->setCallback(cb);

    return 0;
}