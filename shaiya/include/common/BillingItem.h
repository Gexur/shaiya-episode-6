#pragma once
#include <cstdint>

namespace shaiya
{
    #pragma pack(push, 1)
    struct BillingItem
    {
        uint8_t type;
        uint8_t typeId;
        uint8_t count;
    };
    #pragma pack(pop)
}
