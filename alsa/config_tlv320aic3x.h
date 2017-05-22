/*
 * Copyright (C) 2011 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/* Copyright (C) 2012 Freescale Semiconductor, Inc. */

#ifndef ANDROID_INCLUDE_IMX_CONFIG_TLV320AIC3X_H
#define ANDROID_INCLUDE_IMX_CONFIG_TLV320AIC3X_H

#include "audio_hardware.h"

#define MIXER_TLV320AIC3X_PCM_VOLUME    "PCM Playback Volume"
#define MIXER_TLV320AIC3X_HP_DAC_VOLUME "HP DAC Playback Volume"

/* These are values that never change */
static struct route_setting defaults_TLV320AIC3X[] = {
    /* general */
    {
        .ctl_name = MIXER_TLV320AIC3X_PCM_VOLUME,
        .intval = 118,
    },
    {
        .ctl_name = MIXER_TLV320AIC3X_HP_DAC_VOLUME,
        .intval = 118,
    },
    {
        .ctl_name = NULL,
    },
};

/* ALSA cards for IMX, these must be defined according different board / kernel config*/
static struct audio_card  tlv320aic3x_card = {
    .name = "tlv320aic3x-audio",
    .driver_name = "tlv320aic3x-aud",
    .supported_out_devices = (
            AUDIO_DEVICE_OUT_WIRED_HEADPHONE |
            AUDIO_DEVICE_OUT_SPEAKER |
            AUDIO_DEVICE_OUT_DEFAULT ),
    .supported_in_devices = (
            AUDIO_DEVICE_IN_WIRED_HEADSET |
            AUDIO_DEVICE_IN_BUILTIN_MIC |
            AUDIO_DEVICE_IN_DEFAULT),
    .defaults            = defaults_TLV320AIC3X,
    .bt_output           = NULL,
    .speaker_output      = NULL,
    .hs_output           = NULL,
    .earpiece_output     = NULL,
    .vx_hs_mic_input     = NULL,
    .mm_main_mic_input   = NULL,
    .vx_main_mic_input   = NULL,
    .mm_hs_mic_input     = NULL,
    .vx_bt_mic_input     = NULL,
    .mm_bt_mic_input     = NULL,
    .card                = 0,
    .out_rate            = 0,
    .out_channels        = 0,
    .out_format          = 0,
    .in_rate             = 0,
    .in_channels         = 0,
    .in_format           = 0,
};

#endif  /* ANDROID_INCLUDE_IMX_CONFIG_TLV320AIC3X_H */
