#pragma once

#include "number.hpp"
#include "utils.hpp"

namespace lx {
    /**
     * @brief Calculate state of ease transition
     *
     * @param max Max number of milliseconds
     * @param current Time passed from the beginning of the transition (in
     * milliseconds)
     * @return f32 Percentage of transition progression. Value returned is in
     * interval [0 ; 1]
     */
    auto ease(u16 max, u16 current) -> f32;
    /**
     * @brief Calculate state of linear transition
     *
     * @param max Max number of milliseconds
     * @param current Time passed from the beginning of the transition (in
     * milliseconds)
     * @return f32 Percentage of transition progression. Value returned is in
     * interval [0 ; 1]
     */
    auto linear(u16 max, u16 current) -> f32;
    /**
     * @brief Calculate state of ease-in transition
     *
     * @param max Max number of milliseconds
     * @param current Time passed from the beginning of the transition (in
     * milliseconds)
     * @return f32 Percentage of transition progression. Value returned is in
     * interval [0 ; 1]
     */
    auto ease_in(u16 max, u16 current) -> f32;
    /**
     * @brief Calculate state of ease-out transition
     *
     * @param max Max number of milliseconds
     * @param current Time passed from the beginning of the transition (in
     * milliseconds)
     * @return f32 Percentage of transition progression. Value returned is in
     * interval [0 ; 1]
     */
    auto ease_out(u16 max, u16 current) -> f32;
    /**
     * @brief Calculate state of ease-in-out transition
     *
     * @param max Max number of milliseconds
     * @param current Time passed from the beginning of the transition (in
     * milliseconds)
     * @return f32 Percentage of transition progression. Value returned is in
     * interval [0 ; 1]
     */
    auto ease_in_out(u16 max, u16 current) -> f32;
    /**
     * @brief Calculate progression of specified cubic bezier function based on
     * time.
     * @param t Time in percentage. Passed value is in
     * interval [0 ; 1]
     * @param p0 First control point. The beginning of the function in {x = 0 ,y
     * = 0}
     * @param p1 Second interpolated point.
     * @param p2 Third interpolated point.
     * @param p3 Last control point. The end of the function in {x = 1 ,y =
     * 1}
     * @return f32 Progression of transition.
     */
    auto cubic_bezier(f32 t, vec2f p0, vec2f p1, vec2f p2, vec2f p3) -> f32;

}; // namespace lx
