﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/DescribeRulesetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlueDataBrew::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeRulesetRequest::DescribeRulesetRequest() : 
    m_nameHasBeenSet(false)
{
}

Aws::String DescribeRulesetRequest::SerializePayload() const
{
  return {};
}




