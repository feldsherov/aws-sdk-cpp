﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeEngineDefaultClusterParametersRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DescribeEngineDefaultClusterParametersRequest::DescribeEngineDefaultClusterParametersRequest() : 
    m_dBParameterGroupFamilyHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String DescribeEngineDefaultClusterParametersRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeEngineDefaultClusterParameters&";
  if(m_dBParameterGroupFamilyHasBeenSet)
  {
    ss << "DBParameterGroupFamily=" << StringUtils::URLEncode(m_dBParameterGroupFamily.c_str()) << "&";
  }

  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filters.member.", filtersCount, "");
      filtersCount++;
    }
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DescribeEngineDefaultClusterParametersRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
