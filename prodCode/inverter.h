//
// Created by grabusr on 04.11.16.
//

#ifndef INTIVETESTALL_INVERTER_H
#define INTIVETESTALL_INVERTER_H

#include <cstdint>
#include <cstddef>

#include <utility>


namespace inverter
{

/**
 * @brief   Inverts inputed data
 *
 * @param input_data    null terminated C-string
 *
 * @param output_data   Given data
 *
 * @note    Notice that output_data needs to be allocate at least inputdata size
 */
void invert(const char* input_data, char* output_data);

/**
 * @brief   Invert given data
 *
 * @param   data    Given data
 */
void invert(char* data);


template <typename T>
void invert(T* data, size_t size)
{
    if(nullptr == data) {
        return;
    }
    const size_t halfSize = size / 2;

    for(size_t i = 0; i < halfSize; ++i) {
        std::swap(data[i], data[size - i - 1]);
    }
}

} // namespace inverter


#endif //INTIVETESTALL_INVERTER_H
