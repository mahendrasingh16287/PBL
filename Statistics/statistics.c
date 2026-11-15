#include "support.h"
double elapsed_milliseconds(long long start_counter,long long end_counter,
                            long long frequency){
    if(frequency<=0||end_counter<start_counter)return 0.0;
    return ((double)(end_counter-start_counter)*1000.0)/(double)frequency;
}