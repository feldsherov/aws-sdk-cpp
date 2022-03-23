﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{
  enum class PredefinedLoadMetricType
  {
    NOT_SET,
    ASGTotalCPUUtilization,
    ASGTotalNetworkIn,
    ASGTotalNetworkOut,
    ALBTargetGroupRequestCount
  };

namespace PredefinedLoadMetricTypeMapper
{
AWS_AUTOSCALING_API PredefinedLoadMetricType GetPredefinedLoadMetricTypeForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForPredefinedLoadMetricType(PredefinedLoadMetricType value);
} // namespace PredefinedLoadMetricTypeMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws
