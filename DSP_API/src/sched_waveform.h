///*!   \file sched_waveform.h
// *    \brief Schedule Wavefrom Streams
// *
// *    \copyright  Copyright 2012-2014 FlexRadio Systems.  All Rights Reserved.
// *                Unauthorized use, duplication or distribution of this software is
// *                strictly prohibited by law.
// *
// *    \date 29-AUG-2014
// *    \author Ed Gonzalez
// *
// */

/* *****************************************************************************
 *
 *  Copyright (C) 2014 FlexRadio Systems.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *  You should have received a copy of the GNU General Public License
 *  along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 *  Contact Information:
 *  email: gpl<at>flexradiosystems.com
 *  Mail:  FlexRadio Systems, Suite 1-150, 4616 W. Howard LN, Austin, TX 78728
 *
 * ************************************************************************** */

#ifndef SCHED_WAVEFORM_H_
#define SCHED_WAVEFORM_H_

#include <stdbool.h>

#include "freedv_api.h"

typedef struct freedv_proc_t *freedv_proc_t;

freedv_proc_t freedv_init(int mode);
void sched_waveformThreadExit(freedv_proc_t params);
void freedv_set_mode(freedv_proc_t params, int mode);
void freedv_queue_rx_samples(freedv_proc_t params, uint32_t *samples, size_t len);

void sched_waveform_setEndOfTX(bool end_of_transmission);
#endif /* SCHED_WAVEFORM_H_ */
