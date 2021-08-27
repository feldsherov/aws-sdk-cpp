﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/GetStudioSessionMappingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetStudioSessionMappingResult::GetStudioSessionMappingResult()
{
}

GetStudioSessionMappingResult::GetStudioSessionMappingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetStudioSessionMappingResult& GetStudioSessionMappingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SessionMapping"))
  {
    m_sessionMapping = jsonValue.GetObject("SessionMapping");

  }



  return *this;
}
