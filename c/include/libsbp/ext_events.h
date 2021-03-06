/*
 * Copyright (C) 2015 Swift Navigation Inc.
 * Contact: Fergus Noble <fergus@swift-nav.com>
 *
 * This source is subject to the license found in the file 'LICENSE' which must
 * be be distributed together with this source. All other rights reserved.
 *
 * THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
 * EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR PURPOSE.
 */

/*****************************************************************************
 * Automatically generated from yaml/swiftnav/sbp/ext_events.yaml
 * with generate.py at 2015-04-14 13:57:47.376336. Please do not hand edit!
 *****************************************************************************/

/** \defgroup ext_events Ext_events
 *
 *  * Messages reporting accurately-timestamped external events,
 * e.g. camera shutter time
 * \{ */

#ifndef LIBSBP_EXT_EVENTS_MESSAGES_H
#define LIBSBP_EXT_EVENTS_MESSAGES_H

#include "common.h"


/** Reports timestamped external pin event
 *
 * Reports detection of an external event, the GPS time it occurred,
 * which pin it was and whether it was rising or falling.
 */
#define SBP_MSG_EXT_EVENT 0x0101
typedef struct __attribute__((packed)) {
  u16 wn;       /**< GPS week number [weeks] */
  u32 tow;      /**< GPS Time of Week rounded to the nearest ms [ms] */
  s32 ns;       /**< Nanosecond remainder of rounded tow [ns] */
  u8 flags;    /**< Flags */
  u8 pin;      /**< Pin number.  0..9 = DEBUG0..9. */
} msg_ext_event_t;


/** \} */

#endif /* LIBSBP_EXT_EVENTS_MESSAGES_H */