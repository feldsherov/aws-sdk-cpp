﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DeleteContactFlowModuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteContactFlowModuleRequest::DeleteContactFlowModuleRequest() : 
    m_instanceIdHasBeenSet(false),
    m_contactFlowModuleIdHasBeenSet(false)
{
}

Aws::String DeleteContactFlowModuleRequest::SerializePayload() const
{
  return {};
}




