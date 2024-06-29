#include "transitions.hpp"
#include "number.hpp"
#include "utils.hpp"
#include <cmath>

namespace lx {


    auto cubic_bezier(f32 t, vec2f p0, vec2f p1, vec2f p2, vec2f p3) -> vec2f {

        f32 u = 1 - t;
        f32 tt = t * t;
        f32 uu = u * u;
        f32 uuu = uu * u;
        f32 ttt = tt * t;

        vec2f p;
        p.x = uuu * p0.x;         // (1 - t)^3 * p0
        p.x += 3 * uu * t * p1.x; // 3 * (1 - t)^2 * t * p1
        p.x += 3 * u * tt * p2.x; // 3 * (1 - t) * t^2 * p2
        p.x += ttt * p3.x;        // t^3 * p3

        p.y = uuu * p0.y;
        p.y += 3 * uu * t * p1.y;
        p.y += 3 * u * tt * p2.y;
        p.y += ttt * p3.y;

        return p;
    }

    auto linear(u16 max, u16 current) -> f32 {

        return f32(current) / max;
    }

    auto ease(u16 max, u16 current) -> f32 {

        vec2f res = cubic_bezier(f32(current) / max, {0.0, 0.0}, {0.25, 0.1},
                                 {0.25, 1.0}, {1.0, 1.0});


        return res.y;
    }

    auto ease_in(u16 max, u16 current) -> f32 {

        vec2f res = cubic_bezier(f32(current) / max, {0.0, 0.0}, {0.42, 0.0},
                                 {1.0, 1.0}, {1.0, 1.0});

        return res.y;
    }

    auto ease_out(u16 max, u16 current) -> f32 {

        vec2f res = cubic_bezier(f32(current) / max, {0.0, 0.0}, {0.0, 0.0},
                                 {0.58, 1.0}, {1.0, 1.0});

        return res.y;
    }

    auto ease_in_out(u16 max, u16 current) -> f32 {

        vec2f res = cubic_bezier(f32(current) / max, {0.0, 0.0}, {0.42, 0.0},
                                 {0.58, 1.0}, {1.0, 1.0});

        return res.y;
    }

} // namespace lx
