﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetBlueprintRunResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBlueprintRunResult::GetBlueprintRunResult()
{
}

GetBlueprintRunResult::GetBlueprintRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBlueprintRunResult& GetBlueprintRunResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BlueprintRun"))
  {
    m_blueprintRun = jsonValue.GetObject("BlueprintRun");

  }



  return *this;
}
