﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/sms/SMSErrorMarshaller.h>
#include <aws/sms/SMSErrors.h>

using namespace Aws::Client;
using namespace Aws::SMS;

AWSError<CoreErrors> SMSErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SMSErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}