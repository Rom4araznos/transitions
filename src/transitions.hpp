#pragma once

#include "number.hpp"

namespace lx {

    auto ease(u16 max, u16 current) -> f32;
    auto linear(u16 max, u16 current) -> f32;
    auto ease_in(u16 max, u16 current) -> f32;
    auto ease_out(u16 max, u16 current) -> f32;
    auto ease_in_out(u16 max, u16 current) -> f32;
    auto cubic_bezier(u16 max, u16 current, f32 y1, f32 y2) -> f32;

}; // namespace lx
