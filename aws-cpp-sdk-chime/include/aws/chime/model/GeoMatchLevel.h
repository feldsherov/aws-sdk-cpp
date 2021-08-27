﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class GeoMatchLevel
  {
    NOT_SET,
    Country,
    AreaCode
  };

namespace GeoMatchLevelMapper
{
AWS_CHIME_API GeoMatchLevel GetGeoMatchLevelForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForGeoMatchLevel(GeoMatchLevel value);
} // namespace GeoMatchLevelMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
