# Generate hidl-impl
```
PACKAGE=vendor.hardware.hellocb@1.0
LOC=vendor/arpi/hardware/interfaces/hellocb/1.0/default/
m -j hidl-gen
hidl-gen -o $LOC -Lc++-impl -rvendor.hardware:vendor/arpi/hardware/interfaces \
    -randroid.hidl:system/libhidl/transport $PACKAGE
hidl-gen -o $LOC -Landroidbp-impl -rvendor.hardware:vendor/arpi/hardware/interfaces \
    -randroid.hidl:system/libhidl/transport $PACKAGE
```
