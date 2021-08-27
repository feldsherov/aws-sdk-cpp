﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/AutoScalingGroupRecommendation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

AutoScalingGroupRecommendation::AutoScalingGroupRecommendation() : 
    m_accountIdHasBeenSet(false),
    m_autoScalingGroupArnHasBeenSet(false),
    m_autoScalingGroupNameHasBeenSet(false),
    m_finding(Finding::NOT_SET),
    m_findingHasBeenSet(false),
    m_utilizationMetricsHasBeenSet(false),
    m_lookBackPeriodInDays(0.0),
    m_lookBackPeriodInDaysHasBeenSet(false),
    m_currentConfigurationHasBeenSet(false),
    m_recommendationOptionsHasBeenSet(false),
    m_lastRefreshTimestampHasBeenSet(false)
{
}

AutoScalingGroupRecommendation::AutoScalingGroupRecommendation(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_autoScalingGroupArnHasBeenSet(false),
    m_autoScalingGroupNameHasBeenSet(false),
    m_finding(Finding::NOT_SET),
    m_findingHasBeenSet(false),
    m_utilizationMetricsHasBeenSet(false),
    m_lookBackPeriodInDays(0.0),
    m_lookBackPeriodInDaysHasBeenSet(false),
    m_currentConfigurationHasBeenSet(false),
    m_recommendationOptionsHasBeenSet(false),
    m_lastRefreshTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

AutoScalingGroupRecommendation& AutoScalingGroupRecommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoScalingGroupArn"))
  {
    m_autoScalingGroupArn = jsonValue.GetString("autoScalingGroupArn");

    m_autoScalingGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoScalingGroupName"))
  {
    m_autoScalingGroupName = jsonValue.GetString("autoScalingGroupName");

    m_autoScalingGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("finding"))
  {
    m_finding = FindingMapper::GetFindingForName(jsonValue.GetString("finding"));

    m_findingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("utilizationMetrics"))
  {
    Array<JsonView> utilizationMetricsJsonList = jsonValue.GetArray("utilizationMetrics");
    for(unsigned utilizationMetricsIndex = 0; utilizationMetricsIndex < utilizationMetricsJsonList.GetLength(); ++utilizationMetricsIndex)
    {
      m_utilizationMetrics.push_back(utilizationMetricsJsonList[utilizationMetricsIndex].AsObject());
    }
    m_utilizationMetricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lookBackPeriodInDays"))
  {
    m_lookBackPeriodInDays = jsonValue.GetDouble("lookBackPeriodInDays");

    m_lookBackPeriodInDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentConfiguration"))
  {
    m_currentConfiguration = jsonValue.GetObject("currentConfiguration");

    m_currentConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendationOptions"))
  {
    Array<JsonView> recommendationOptionsJsonList = jsonValue.GetArray("recommendationOptions");
    for(unsigned recommendationOptionsIndex = 0; recommendationOptionsIndex < recommendationOptionsJsonList.GetLength(); ++recommendationOptionsIndex)
    {
      m_recommendationOptions.push_back(recommendationOptionsJsonList[recommendationOptionsIndex].AsObject());
    }
    m_recommendationOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastRefreshTimestamp"))
  {
    m_lastRefreshTimestamp = jsonValue.GetDouble("lastRefreshTimestamp");

    m_lastRefreshTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoScalingGroupRecommendation::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_autoScalingGroupArnHasBeenSet)
  {
   payload.WithString("autoScalingGroupArn", m_autoScalingGroupArn);

  }

  if(m_autoScalingGroupNameHasBeenSet)
  {
   payload.WithString("autoScalingGroupName", m_autoScalingGroupName);

  }

  if(m_findingHasBeenSet)
  {
   payload.WithString("finding", FindingMapper::GetNameForFinding(m_finding));
  }

  if(m_utilizationMetricsHasBeenSet)
  {
   Array<JsonValue> utilizationMetricsJsonList(m_utilizationMetrics.size());
   for(unsigned utilizationMetricsIndex = 0; utilizationMetricsIndex < utilizationMetricsJsonList.GetLength(); ++utilizationMetricsIndex)
   {
     utilizationMetricsJsonList[utilizationMetricsIndex].AsObject(m_utilizationMetrics[utilizationMetricsIndex].Jsonize());
   }
   payload.WithArray("utilizationMetrics", std::move(utilizationMetricsJsonList));

  }

  if(m_lookBackPeriodInDaysHasBeenSet)
  {
   payload.WithDouble("lookBackPeriodInDays", m_lookBackPeriodInDays);

  }

  if(m_currentConfigurationHasBeenSet)
  {
   payload.WithObject("currentConfiguration", m_currentConfiguration.Jsonize());

  }

  if(m_recommendationOptionsHasBeenSet)
  {
   Array<JsonValue> recommendationOptionsJsonList(m_recommendationOptions.size());
   for(unsigned recommendationOptionsIndex = 0; recommendationOptionsIndex < recommendationOptionsJsonList.GetLength(); ++recommendationOptionsIndex)
   {
     recommendationOptionsJsonList[recommendationOptionsIndex].AsObject(m_recommendationOptions[recommendationOptionsIndex].Jsonize());
   }
   payload.WithArray("recommendationOptions", std::move(recommendationOptionsJsonList));

  }

  if(m_lastRefreshTimestampHasBeenSet)
  {
   payload.WithDouble("lastRefreshTimestamp", m_lastRefreshTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
