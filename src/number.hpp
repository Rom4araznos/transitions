#pragma once

#include <cstdint>

#if __STDCPP_FLOAT128_T__ == 1 && __STDCPP_FLOAT64_T__ == 1 &&                 \
    __STDCPP_FLOAT32_T__ == 1
#define __LASTIX_USE_STDFLOAT
#include <stdfloat>
using f32 = std::float32_t;
using f64 = std::float64_t;
using f128 = std::float128_t;
#endif

// Short, easy to remember and easy to use aliases for number types

using u8 = std::uint8_t;
using u16 = std::uint16_t;
using u32 = std::uint32_t;
using u64 = std::uint64_t;

using i8 = std::int8_t;
using i16 = std::int16_t;
using i32 = std::int32_t;
using i64 = std::int64_t;

using usize = std::size_t;

#ifndef __LASTIX_USE_STDFLOAT
using f32 = float;
using f64 = double;
using f128 = long double;
#endif