//
// Created by grabusr on 04.11.16.
//

#include "inverter.h"

#include <cstring>
#include <utility>

namespace inverter
{

void invert(const uint16_t* input_data, uint16_t* output_data, size_t size)
{
    throw "not implemented";
}

void invert(const char* input_data, char* output_data)
{
    if(nullptr == input_data) {
        return;
    }
    const size_t length = strlen(input_data);

    for(size_t i = 0; i < length; ++i) {
        const size_t swapIdx = length - i - 1;
        output_data[i] = input_data[length - i - 1];
    }
    output_data[length] = '\0';
}

void invert(char* data)
{
    if(nullptr == data) {
        return;
    }
    const size_t length = strlen(data);
    const size_t halfSize = length / 2;

    for(size_t i = 0; i < halfSize; ++i) {
        const size_t swapIdx = length - i - 1;
        if(swapIdx == i) {
            continue;
        }
        std::swap(data[i], data[swapIdx]);
    }
}

} // namespace inverter
