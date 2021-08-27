﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SortTrialComponentsBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace SortTrialComponentsByMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");


        SortTrialComponentsBy GetSortTrialComponentsByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return SortTrialComponentsBy::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return SortTrialComponentsBy::CreationTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortTrialComponentsBy>(hashCode);
          }

          return SortTrialComponentsBy::NOT_SET;
        }

        Aws::String GetNameForSortTrialComponentsBy(SortTrialComponentsBy enumValue)
        {
          switch(enumValue)
          {
          case SortTrialComponentsBy::Name:
            return "Name";
          case SortTrialComponentsBy::CreationTime:
            return "CreationTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortTrialComponentsByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
