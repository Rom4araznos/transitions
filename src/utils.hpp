#pragma once

#include "number.hpp"

namespace lx {

    template <class T> struct vec2_base {

            T x;
            T y;

            constexpr auto operator-(vec2_base other) -> vec2_base {

                return vec2_base(x - other.x, y - other.y);
            }

            constexpr auto operator+(vec2_base other) -> vec2_base {

                return vec2_base(x + other.x, y + other.y);
            }

            constexpr auto operator*(vec2_base other) -> vec2_base {

                return vec2_base(x * other.x, y * other.y);
            }

            constexpr auto operator/(vec2_base other) -> vec2_base {

                return vec2_base(x / other.x, y / other.y);
            }

            constexpr auto operator*(f32 other) -> vec2_base {

                return vec2_base(x * other, y * other);
            }

            constexpr auto operator/(f32 other) -> vec2_base {

                return vec2_base(x / other, y / other);
            }

            constexpr auto operator-=(vec2_base other) -> vec2_base& {

                x -= other.x;
                y -= other.y;

                return *this;
            }

            constexpr auto operator+=(vec2_base other) -> vec2_base& {

                x += other.x;
                y += other.y;

                return *this;
            }

            constexpr auto operator*=(vec2_base other) -> vec2_base& {

                x *= other.x;
                y *= other.y;

                return *this;
            }

            constexpr auto operator/=(vec2_base other) -> vec2_base& {

                x /= other.x;
                y /= other.y;

                return *this;
            }
    };

    template <class T> struct vec4_base {

            T a;
            T b;
            T c;
            T d;
    };

    using vec2 = vec2_base<i32>;
    using vec2u = vec2_base<u32>;
    using vec2f = vec2_base<f32>;

    /**
     * @brief Vector of 2 16-bit signed integers
     *
     */
    using vec2s = vec2_base<i16>;

    /**
     * @brief Vector of 2 16-bit unsigned integers
     *
     */
    using vec2us = vec2_base<u16>;

    using vec4 = vec4_base<i32>;
    using vec4u = vec4_base<u32>;
    using vec4f = vec4_base<f32>;
    using vec4s = vec4_base<i16>;
    using vec4us = vec4_base<u16>;
    using vec4b = vec4_base<i8>;
    using vec4ub = vec4_base<u8>;

    struct rgba {

            u8 r = 0;
            u8 g = 0;
            u8 b = 0;
            u8 a = 255;
    };

}; // namespace lx