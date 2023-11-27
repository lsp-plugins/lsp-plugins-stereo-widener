/*
 * Copyright (C) 2020 Linux Studio Plugins Project <https://lsp-plug.in/>
 *           (C) 2020 Vladimir Sadovnikov <sadko4u@gmail.com>
 *
 * This file is part of lsp-plugins-stereo-widener
 * Created on: 25 нояб. 2020 г.
 *
 * lsp-plugins-stereo-widener is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * lsp-plugins-stereo-widener is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with lsp-plugins-stereo-widener. If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef PRIVATE_META_STEREO_WIDENER_H_
#define PRIVATE_META_STEREO_WIDENER_H_

#include <lsp-plug.in/plug-fw/meta/types.h>
#include <lsp-plug.in/plug-fw/const.h>

namespace lsp
{
    //-------------------------------------------------------------------------
    // Plugin metadata
    namespace meta
    {
        typedef struct stereo_widener
        {
            static constexpr float  SAMPLES_MIN         = 0.0f;
            static constexpr float  SAMPLES_MAX         = 10000.0f;
            static constexpr float  SAMPLES_DFL         = 0.0f;
            static constexpr float  SAMPLES_STEP        = 1.0f;

            static constexpr float  TIME_MIN            = 0.0f;
            static constexpr float  TIME_MAX            = 1000.0f;
            static constexpr float  TIME_DFL            = 0.0f;
            static constexpr float  TIME_STEP           = 0.01f;

            static constexpr float  DELAY_OUT_MAX_TIME  = 10000.0f;
        } stereo_widener;

        // Plugin type metadata
        extern const plugin_t stereo_widener_mono;
        extern const plugin_t stereo_widener_stereo;

    } /* namespace meta */
} /* namespace lsp */

#endif /* PRIVATE_META_STEREO_WIDENER_H_ */
