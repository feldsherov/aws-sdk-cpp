﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/CreateDataSourceFromRedshiftRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MachineLearning::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDataSourceFromRedshiftRequest::CreateDataSourceFromRedshiftRequest() : 
    m_dataSourceIdHasBeenSet(false),
    m_dataSourceNameHasBeenSet(false),
    m_dataSpecHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_computeStatistics(false),
    m_computeStatisticsHasBeenSet(false)
{
}

Aws::String CreateDataSourceFromRedshiftRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataSourceIdHasBeenSet)
  {
   payload.WithString("DataSourceId", m_dataSourceId);

  }

  if(m_dataSourceNameHasBeenSet)
  {
   payload.WithString("DataSourceName", m_dataSourceName);

  }

  if(m_dataSpecHasBeenSet)
  {
   payload.WithObject("DataSpec", m_dataSpec.Jsonize());

  }

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  if(m_computeStatisticsHasBeenSet)
  {
   payload.WithBool("ComputeStatistics", m_computeStatistics);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDataSourceFromRedshiftRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonML_20141212.CreateDataSourceFromRedshift"));
  return headers;

}




