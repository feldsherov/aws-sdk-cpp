﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/DetachUserPolicyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

DetachUserPolicyRequest::DetachUserPolicyRequest() : 
    m_userNameHasBeenSet(false),
    m_policyArnHasBeenSet(false)
{
}

Aws::String DetachUserPolicyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DetachUserPolicy&";
  if(m_userNameHasBeenSet)
  {
    ss << "UserName=" << StringUtils::URLEncode(m_userName.c_str()) << "&";
  }

  if(m_policyArnHasBeenSet)
  {
    ss << "PolicyArn=" << StringUtils::URLEncode(m_policyArn.c_str()) << "&";
  }

  ss << "Version=2010-05-08";
  return ss.str();
}


void  DetachUserPolicyRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
