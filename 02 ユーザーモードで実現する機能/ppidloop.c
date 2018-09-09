// Linux 4.10.0-28-generic (parallels-vm)  09/06/2018      _x86_64_        (2 CPU)

// 12:47:07 AM     CPU     %user     %nice   %system   %iowait    %steal     %idle
// 12:4BA7:08 AM     all     17.91      0.00     37.81      0.00      0.00     44.28
// 12:47:08 AM       0      4.95      0.00      5.94      0.00      0.00     89.11
// 12:47:08 AM       1     31.00      0.00     69.00      0.00      0.00      0.00

// Average:        CPU     %user     %nice   %system   %iowait    %steal     %idle
// Average:        all     17.91      0.00     37.81      0.00      0.00     44.28
// Average:          0      4.95      0.00      5.94      0.00      0.00     89.11
// Average:          1     31.00      0.00     69.00      0.00      0.00      0.00

#include <sys/types.h>
#include <unistd.h>

int main(void)
{
    for (;;) 
        getppid();
}