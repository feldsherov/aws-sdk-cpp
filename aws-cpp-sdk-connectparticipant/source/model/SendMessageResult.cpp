﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/SendMessageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConnectParticipant::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SendMessageResult::SendMessageResult()
{
}

SendMessageResult::SendMessageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SendMessageResult& SendMessageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("AbsoluteTime"))
  {
    m_absoluteTime = jsonValue.GetString("AbsoluteTime");

  }



  return *this;
}
