#include <linux/version.h>

#if LINUX_VERSION_CODE <= KERNEL_VERSION(3,13,0)
#include "nuvoton-cir.313.h"
#else
#include "nuvoton-cir.319.h"
#endif
