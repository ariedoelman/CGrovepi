// Copyright Dexter Industries, 2016
// http://dexterindustries.com/grovepi

#ifndef GROVEPI_H
#define GROVEPI_H

#include <stdio.h>
#include <stdlib.h>
#include <linux/i2c-dev.h>
#include <fcntl.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

// Change variadic ioctl to non-variadic version, you get the following compiler error:
//
// SwiftGlibc.ioctl:2:13: note: 'ioctl' has been explicitly marked unavailable here
// public func ioctl(_ __fd: Int32, _ __request: UInt, _ varargs: Any...) -> Int32
//

int ioctl_address(int fd, unsigned long request, unsigned char address);

#endif /*GROVEPI_H */
