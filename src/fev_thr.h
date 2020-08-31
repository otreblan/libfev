/*
 * Copyright 2020 Patryk Stefanski
 *
 * Licensed under the Apache License, Version 2.0, <LICENSE-APACHE or
 * http://apache.org/licenses/LICENSE-2.0> or the MIT license <LICENSE-MIT or
 * http://opensource.org/licenses/MIT>, at your option. This file may not be
 * copied, modified, or distributed except according to those terms.
 */

#ifndef FEV_THR_H
#define FEV_THR_H

#include <fev/fev.h>

#if defined(FEV_THR_POSIX)
#include "fev_thr_posix.h"
#elif defined(FEV_THR_WIN)
#include "fev_thr_win.h"
#else
#error Your platform is unsupported!
#endif

#endif /* !FEV_THR_H */
