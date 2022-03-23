﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{
  enum class AggregatedUtterancesSortAttribute
  {
    NOT_SET,
    HitCount,
    MissedCount
  };

namespace AggregatedUtterancesSortAttributeMapper
{
AWS_LEXMODELSV2_API AggregatedUtterancesSortAttribute GetAggregatedUtterancesSortAttributeForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForAggregatedUtterancesSortAttribute(AggregatedUtterancesSortAttribute value);
} // namespace AggregatedUtterancesSortAttributeMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
