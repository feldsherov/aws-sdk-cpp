﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/DescribeContactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeContactRequest::DescribeContactRequest() : 
    m_contactIdHasBeenSet(false)
{
}

Aws::String DescribeContactRequest::SerializePayload() const
{
  return {};
}




