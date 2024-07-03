#include "transitions.hpp"
#include "number.hpp"
#include "utils.hpp"
#include <cassert>
#include <cmath>

namespace lx {


    auto cubic_bezier(f32 t, vec2f p0, vec2f p1, vec2f p2, vec2f p3) -> f32 {

        assert(t <= 1 && "t can't be more than 1");

        vec2f p;

        p.y = std::pow(1 - t, 3) * p0.y + 3 * std::pow(1 - t, 2) * t * p1.y +
              3 * (1 - t) * std::pow(t, 2) * p2.y + std::pow(t, 3) * p3.y;


        return p.y;
    }

    auto linear(u16 max, u16 current) -> f32 {

        assert(current > max && "current can't be more than max");

        return f32(current) / max;
    }

    auto ease(u16 max, u16 current) -> f32 {

        f32 res = cubic_bezier(f32(current) / max, {0.0, 0.0}, {0.25, 0.1},
                               {0.25, 1.0}, {1.0, 1.0});


        return res;
    }

    auto ease_in(u16 max, u16 current) -> f32 {

        f32 res = cubic_bezier(f32(current) / max, {0.0, 0.0}, {0.42, 0.0},
                               {1.0, 1.0}, {1.0, 1.0});

        return res;
    }

    auto ease_out(u16 max, u16 current) -> f32 {

        f32 res = cubic_bezier(f32(current) / max, {0.0, 0.0}, {0.0, 0.0},
                               {0.58, 1.0}, {1.0, 1.0});

        return res;
    }

    auto ease_in_out(u16 max, u16 current) -> f32 {

        f32 res = cubic_bezier(f32(current) / max, {0.0, 0.0}, {0.42, 0.0},
                               {0.58, 1.0}, {1.0, 1.0});

        return res;
    }

} // namespace lx
