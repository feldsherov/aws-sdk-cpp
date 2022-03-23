﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/CreateFleetLocationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFleetLocationsRequest::CreateFleetLocationsRequest() : 
    m_fleetIdHasBeenSet(false),
    m_locationsHasBeenSet(false)
{
}

Aws::String CreateFleetLocationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

  }

  if(m_locationsHasBeenSet)
  {
   Array<JsonValue> locationsJsonList(m_locations.size());
   for(unsigned locationsIndex = 0; locationsIndex < locationsJsonList.GetLength(); ++locationsIndex)
   {
     locationsJsonList[locationsIndex].AsObject(m_locations[locationsIndex].Jsonize());
   }
   payload.WithArray("Locations", std::move(locationsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateFleetLocationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.CreateFleetLocations"));
  return headers;

}




