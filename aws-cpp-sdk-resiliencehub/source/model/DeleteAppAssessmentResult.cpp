﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/DeleteAppAssessmentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteAppAssessmentResult::DeleteAppAssessmentResult() : 
    m_assessmentStatus(AssessmentStatus::NOT_SET)
{
}

DeleteAppAssessmentResult::DeleteAppAssessmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_assessmentStatus(AssessmentStatus::NOT_SET)
{
  *this = result;
}

DeleteAppAssessmentResult& DeleteAppAssessmentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assessmentArn"))
  {
    m_assessmentArn = jsonValue.GetString("assessmentArn");

  }

  if(jsonValue.ValueExists("assessmentStatus"))
  {
    m_assessmentStatus = AssessmentStatusMapper::GetAssessmentStatusForName(jsonValue.GetString("assessmentStatus"));

  }



  return *this;
}
