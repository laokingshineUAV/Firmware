/****************************************************************************
 *
 *   Copyright (c) 2015 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/**
 * @file tiltrotor_params.c
 * Parameters for vtol attitude controller.
 *
 * @author Roman Bapst <roman@px4.io>
 */

#include <systemlib/param/param.h>

/**
 * Position of tilt servo in mc mode
 *
 * @min 0.0
 * @max 1.0
 * @increment 0.01
 * @decimal 3
 * @group VTOL Attitude Control
 */
PARAM_DEFINE_FLOAT(VT_TILT_MC, 0.0f);

/**
 * Position of tilt servo in transition mode
 *
 * @min 0.0
 * @max 1.0
 * @increment 0.01
 * @decimal 3
 * @group VTOL Attitude Control
 */
PARAM_DEFINE_FLOAT(VT_TILT_TRANS, 0.3f);

/**
 * Position of tilt servo in fw mode
 *
 * @min 0.0
 * @max 1.0
 * @increment 0.01
 * @decimal 3
 * @group VTOL Attitude Control
 */
PARAM_DEFINE_FLOAT(VT_TILT_FW, 1.0f);

/**
 * Duration of front transition phase 2
 *
 * Time in seconds it should take for the rotors to rotate forward completely from the point
 * when the plane has picked up enough airspeed and is ready to go into fixed wind mode.
 *
 * @unit s
 * @min 0.1
 * @max 5.0
 * @increment 0.01
 * @decimal 3
 * @group VTOL Attitude Control
 */
PARAM_DEFINE_FLOAT(VT_TRANS_P2_DUR, 0.5f);

/**
 * The channel number of motors that must be turned off in fixed wing mode.
 *
 * @min 0
 * @max 12345678
 * @increment 1
 * @decimal 0
 * @group VTOL Attitude Control
 */
PARAM_DEFINE_INT32(VT_FW_MOT_OFFID, 0);

/**
 * Differential thrust in forwards flight.
 *
 * Set to 1 to enable differential thrust in fixed-wing flight.
 *
 * @min 0
 * @max 1
 * @decimal 0
 * @group VTOL Attitude Control
 */
PARAM_DEFINE_INT32(VT_FW_DIFTHR_EN, 0);

/**
 * Differential thrust scaling factor
 *
 * This factor specifies how the yaw input gets mapped to differential thrust in forwards flight.
 *
 * @min 0.0
 * @max 1.0
 * @decimal 2
 * @increment 0.1
 * @group VTOL Attitude Control
 */
PARAM_DEFINE_FLOAT(VT_FW_DIFTHR_SC, 0.1f);
