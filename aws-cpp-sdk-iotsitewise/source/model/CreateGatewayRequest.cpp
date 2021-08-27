﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/CreateGatewayRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateGatewayRequest::CreateGatewayRequest() : 
    m_gatewayNameHasBeenSet(false),
    m_gatewayPlatformHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateGatewayRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayNameHasBeenSet)
  {
   payload.WithString("gatewayName", m_gatewayName);

  }

  if(m_gatewayPlatformHasBeenSet)
  {
   payload.WithObject("gatewayPlatform", m_gatewayPlatform.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




