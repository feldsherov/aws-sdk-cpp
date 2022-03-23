﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/VpcConnectorStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppRunner
  {
    namespace Model
    {
      namespace VpcConnectorStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        VpcConnectorStatus GetVpcConnectorStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return VpcConnectorStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return VpcConnectorStatus::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpcConnectorStatus>(hashCode);
          }

          return VpcConnectorStatus::NOT_SET;
        }

        Aws::String GetNameForVpcConnectorStatus(VpcConnectorStatus enumValue)
        {
          switch(enumValue)
          {
          case VpcConnectorStatus::ACTIVE:
            return "ACTIVE";
          case VpcConnectorStatus::INACTIVE:
            return "INACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VpcConnectorStatusMapper
    } // namespace Model
  } // namespace AppRunner
} // namespace Aws
