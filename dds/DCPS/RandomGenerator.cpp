/*
 * $Id$
 *
 * Copyright 2009 Object Computing, Inc.
 *
 * Distributed under the OpenDDS License.
 * See: http://www.opendds.org/license.html
 */

#include "DCPS/DdsDcps_pch.h" //Only the _pch include should start with DCPS/

#include "RandomGenerator.h"

#ifndef __ACE_INLINE__
# include "RandomGenerator.inl"
#endif  /* __ACE_INLINE__ */

#include <ctime>

namespace OpenDDS {
namespace DCPS {

struct RandomSeed {
  RandomSeed() {
    std::srand(std::time(0));
  }
} __random_seed;

} // namespace OpenDDS
} // namespace DCPS
