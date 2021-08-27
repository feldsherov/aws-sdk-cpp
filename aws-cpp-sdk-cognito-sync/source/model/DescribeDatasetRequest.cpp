﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/model/DescribeDatasetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDatasetRequest::DescribeDatasetRequest() : 
    m_identityPoolIdHasBeenSet(false),
    m_identityIdHasBeenSet(false),
    m_datasetNameHasBeenSet(false)
{
}

Aws::String DescribeDatasetRequest::SerializePayload() const
{
  return {};
}




