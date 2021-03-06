/*
 * This file is part of the 'Yet another gauge' project.
 *
 * Copyright (C) 2018 Ivan Dyachenko <vandyachen@gmail.com>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef YET_ANOTHER_GAUGE__MONOGL__IMAGE_H
#define YET_ANOTHER_GAUGE__MONOGL__IMAGE_H

#include "monogl_types.h"

MONOGL_C_PLUS_PLUS_BEGIN_GUARD

/**
 * @brief Allocate a struct monogl_image_t, intended to be used as an image
 * @param [in] width
 * @param [in] height
 * @param [in] dots Pointer to dots buffer (must outlast this image)
 * @return Created monogl_image_t
 */
MONOGL_API monogl_image_t *monogl_image_new(uint16_t width, uint16_t height, void const *const dots);

/**
 * @brief Free the memory for the given monogl_image_t
 * @param [in,out] image
 */
MONOGL_API void monogl_image_delete(monogl_image_t *);

/**
 * @brief Return the number of dots in each row
 * @param [in] image
 * @return The number of dots in each row
 */
MONOGL_API uint16_t monogl_image_get_width(const monogl_image_t *const);

/**
 * @brief Return the number of rows
 * @param [in] image
 * @return The number of rows
 */
MONOGL_API uint16_t monogl_image_get_height(const monogl_image_t *const);

/**
 * @brief Return pointer to dots buffer
 * @param [in] image
 * @return Pointer to dots buffer
 */
MONOGL_API void const *monogl_image_get_dots(const monogl_image_t *const);

MONOGL_C_PLUS_PLUS_END_GUARD

#endif // YET_ANOTHER_GAUGE__MONOGL__IMAGE_H
