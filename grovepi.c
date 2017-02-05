#include "grovepi.h"

// Change variadic ioctl to non-variadic version, you get the following compiler error:
//
// SwiftGlibc.ioctl:2:13: note: 'ioctl' has been explicitly marked unavailable here
// public func ioctl(_ __fd: Int32, _ __request: UInt, _ varargs: Any...) -> Int32
//

int ioctl_address(int fd, unsigned long request, unsigned char address) {
  return ioctl(fd, request, address);
}

