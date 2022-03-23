﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class ReportFormat
  {
    NOT_SET,
    CSV,
    JSON
  };

namespace ReportFormatMapper
{
AWS_INSPECTOR2_API ReportFormat GetReportFormatForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForReportFormat(ReportFormat value);
} // namespace ReportFormatMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
