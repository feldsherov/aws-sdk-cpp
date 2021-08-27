﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ListJobTemplatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaConvert::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListJobTemplatesRequest::ListJobTemplatesRequest() : 
    m_categoryHasBeenSet(false),
    m_listBy(JobTemplateListBy::NOT_SET),
    m_listByHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_order(Order::NOT_SET),
    m_orderHasBeenSet(false)
{
}

Aws::String ListJobTemplatesRequest::SerializePayload() const
{
  return {};
}

void ListJobTemplatesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_categoryHasBeenSet)
    {
      ss << m_category;
      uri.AddQueryStringParameter("category", ss.str());
      ss.str("");
    }

    if(m_listByHasBeenSet)
    {
      ss << JobTemplateListByMapper::GetNameForJobTemplateListBy(m_listBy);
      uri.AddQueryStringParameter("listBy", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_orderHasBeenSet)
    {
      ss << OrderMapper::GetNameForOrder(m_order);
      uri.AddQueryStringParameter("order", ss.str());
      ss.str("");
    }

}



