//
// Created by grabusr on 04.11.16.
//

#ifndef INTIVETESTALL_INVERTER_H
#define INTIVETESTALL_INVERTER_H

#include <cstdint>
#include <cstddef>


namespace inverter
{

/**
 * @brief       Inverts inputed data
 *
 * @param data  Given data
 *
 * @param size  Array size
 */
void invert(uint16_t* data, size_t size);

/**
 * @brief       Inverts inputed data
 *
 * @param data  Given data
 *
 * @param size  Array size
 */
void invert(char* data, size_t size);

} // namespace inverter


#endif //INTIVETESTALL_INVERTER_H
