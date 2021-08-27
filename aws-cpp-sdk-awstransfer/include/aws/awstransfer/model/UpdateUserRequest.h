﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/HomeDirectoryType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/PosixProfile.h>
#include <aws/awstransfer/model/HomeDirectoryMapEntry.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class AWS_TRANSFER_API UpdateUserRequest : public TransferRequest
  {
  public:
    UpdateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUser"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the landing directory (folder) for a user when they log in to the
     * server using their file transfer protocol client.</p> <p>An example is
     * <code>your-Amazon-S3-bucket-name&gt;/home/username</code>.</p>
     */
    inline const Aws::String& GetHomeDirectory() const{ return m_homeDirectory; }

    /**
     * <p>Specifies the landing directory (folder) for a user when they log in to the
     * server using their file transfer protocol client.</p> <p>An example is
     * <code>your-Amazon-S3-bucket-name&gt;/home/username</code>.</p>
     */
    inline bool HomeDirectoryHasBeenSet() const { return m_homeDirectoryHasBeenSet; }

    /**
     * <p>Specifies the landing directory (folder) for a user when they log in to the
     * server using their file transfer protocol client.</p> <p>An example is
     * <code>your-Amazon-S3-bucket-name&gt;/home/username</code>.</p>
     */
    inline void SetHomeDirectory(const Aws::String& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = value; }

    /**
     * <p>Specifies the landing directory (folder) for a user when they log in to the
     * server using their file transfer protocol client.</p> <p>An example is
     * <code>your-Amazon-S3-bucket-name&gt;/home/username</code>.</p>
     */
    inline void SetHomeDirectory(Aws::String&& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = std::move(value); }

    /**
     * <p>Specifies the landing directory (folder) for a user when they log in to the
     * server using their file transfer protocol client.</p> <p>An example is
     * <code>your-Amazon-S3-bucket-name&gt;/home/username</code>.</p>
     */
    inline void SetHomeDirectory(const char* value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory.assign(value); }

    /**
     * <p>Specifies the landing directory (folder) for a user when they log in to the
     * server using their file transfer protocol client.</p> <p>An example is
     * <code>your-Amazon-S3-bucket-name&gt;/home/username</code>.</p>
     */
    inline UpdateUserRequest& WithHomeDirectory(const Aws::String& value) { SetHomeDirectory(value); return *this;}

    /**
     * <p>Specifies the landing directory (folder) for a user when they log in to the
     * server using their file transfer protocol client.</p> <p>An example is
     * <code>your-Amazon-S3-bucket-name&gt;/home/username</code>.</p>
     */
    inline UpdateUserRequest& WithHomeDirectory(Aws::String&& value) { SetHomeDirectory(std::move(value)); return *this;}

    /**
     * <p>Specifies the landing directory (folder) for a user when they log in to the
     * server using their file transfer protocol client.</p> <p>An example is
     * <code>your-Amazon-S3-bucket-name&gt;/home/username</code>.</p>
     */
    inline UpdateUserRequest& WithHomeDirectory(const char* value) { SetHomeDirectory(value); return *this;}


    /**
     * <p>The type of landing directory (folder) you want your users' home directory to
     * be when they log into the server. If you set it to <code>PATH</code>, the user
     * will see the absolute Amazon S3 bucket paths as is in their file transfer
     * protocol clients. If you set it <code>LOGICAL</code>, you will need to provide
     * mappings in the <code>HomeDirectoryMappings</code> for how you want to make
     * Amazon S3 paths visible to your users.</p>
     */
    inline const HomeDirectoryType& GetHomeDirectoryType() const{ return m_homeDirectoryType; }

    /**
     * <p>The type of landing directory (folder) you want your users' home directory to
     * be when they log into the server. If you set it to <code>PATH</code>, the user
     * will see the absolute Amazon S3 bucket paths as is in their file transfer
     * protocol clients. If you set it <code>LOGICAL</code>, you will need to provide
     * mappings in the <code>HomeDirectoryMappings</code> for how you want to make
     * Amazon S3 paths visible to your users.</p>
     */
    inline bool HomeDirectoryTypeHasBeenSet() const { return m_homeDirectoryTypeHasBeenSet; }

    /**
     * <p>The type of landing directory (folder) you want your users' home directory to
     * be when they log into the server. If you set it to <code>PATH</code>, the user
     * will see the absolute Amazon S3 bucket paths as is in their file transfer
     * protocol clients. If you set it <code>LOGICAL</code>, you will need to provide
     * mappings in the <code>HomeDirectoryMappings</code> for how you want to make
     * Amazon S3 paths visible to your users.</p>
     */
    inline void SetHomeDirectoryType(const HomeDirectoryType& value) { m_homeDirectoryTypeHasBeenSet = true; m_homeDirectoryType = value; }

    /**
     * <p>The type of landing directory (folder) you want your users' home directory to
     * be when they log into the server. If you set it to <code>PATH</code>, the user
     * will see the absolute Amazon S3 bucket paths as is in their file transfer
     * protocol clients. If you set it <code>LOGICAL</code>, you will need to provide
     * mappings in the <code>HomeDirectoryMappings</code> for how you want to make
     * Amazon S3 paths visible to your users.</p>
     */
    inline void SetHomeDirectoryType(HomeDirectoryType&& value) { m_homeDirectoryTypeHasBeenSet = true; m_homeDirectoryType = std::move(value); }

    /**
     * <p>The type of landing directory (folder) you want your users' home directory to
     * be when they log into the server. If you set it to <code>PATH</code>, the user
     * will see the absolute Amazon S3 bucket paths as is in their file transfer
     * protocol clients. If you set it <code>LOGICAL</code>, you will need to provide
     * mappings in the <code>HomeDirectoryMappings</code> for how you want to make
     * Amazon S3 paths visible to your users.</p>
     */
    inline UpdateUserRequest& WithHomeDirectoryType(const HomeDirectoryType& value) { SetHomeDirectoryType(value); return *this;}

    /**
     * <p>The type of landing directory (folder) you want your users' home directory to
     * be when they log into the server. If you set it to <code>PATH</code>, the user
     * will see the absolute Amazon S3 bucket paths as is in their file transfer
     * protocol clients. If you set it <code>LOGICAL</code>, you will need to provide
     * mappings in the <code>HomeDirectoryMappings</code> for how you want to make
     * Amazon S3 paths visible to your users.</p>
     */
    inline UpdateUserRequest& WithHomeDirectoryType(HomeDirectoryType&& value) { SetHomeDirectoryType(std::move(value)); return *this;}


    /**
     * <p>Logical directory mappings that specify what Amazon S3 paths and keys should
     * be visible to your user and how you want to make them visible. You will need to
     * specify the "<code>Entry</code>" and "<code>Target</code>" pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 path. If you only specify a target, it will be displayed as
     * is. You will need to also make sure that your IAM role provides access to paths
     * in <code>Target</code>. The following is an example.</p> <p> <code>'[
     * "/bucket2/documentation", { "Entry": "your-personal-report.pdf", "Target":
     * "/bucket3/customized-reports/${transfer:UserName}.pdf" } ]'</code> </p> <p>In
     * most cases, you can use this value instead of the scope-down policy to lock your
     * user down to the designated home directory ("chroot"). To do this, you can set
     * <code>Entry</code> to '/' and set <code>Target</code> to the HomeDirectory
     * parameter value.</p>  <p>If the target of a logical directory entry does
     * not exist in Amazon S3, the entry will be ignored. As a workaround, you can use
     * the Amazon S3 API to create 0 byte objects as place holders for your directory.
     * If using the CLI, use the <code>s3api</code> call instead of <code>s3</code> so
     * you can use the put-object operation. For example, you use the following:
     * <code>aws s3api put-object --bucket bucketname --key path/to/folder/</code>.
     * Make sure that the end of the key name ends in a / for it to be considered a
     * folder.</p> 
     */
    inline const Aws::Vector<HomeDirectoryMapEntry>& GetHomeDirectoryMappings() const{ return m_homeDirectoryMappings; }

    /**
     * <p>Logical directory mappings that specify what Amazon S3 paths and keys should
     * be visible to your user and how you want to make them visible. You will need to
     * specify the "<code>Entry</code>" and "<code>Target</code>" pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 path. If you only specify a target, it will be displayed as
     * is. You will need to also make sure that your IAM role provides access to paths
     * in <code>Target</code>. The following is an example.</p> <p> <code>'[
     * "/bucket2/documentation", { "Entry": "your-personal-report.pdf", "Target":
     * "/bucket3/customized-reports/${transfer:UserName}.pdf" } ]'</code> </p> <p>In
     * most cases, you can use this value instead of the scope-down policy to lock your
     * user down to the designated home directory ("chroot"). To do this, you can set
     * <code>Entry</code> to '/' and set <code>Target</code> to the HomeDirectory
     * parameter value.</p>  <p>If the target of a logical directory entry does
     * not exist in Amazon S3, the entry will be ignored. As a workaround, you can use
     * the Amazon S3 API to create 0 byte objects as place holders for your directory.
     * If using the CLI, use the <code>s3api</code> call instead of <code>s3</code> so
     * you can use the put-object operation. For example, you use the following:
     * <code>aws s3api put-object --bucket bucketname --key path/to/folder/</code>.
     * Make sure that the end of the key name ends in a / for it to be considered a
     * folder.</p> 
     */
    inline bool HomeDirectoryMappingsHasBeenSet() const { return m_homeDirectoryMappingsHasBeenSet; }

    /**
     * <p>Logical directory mappings that specify what Amazon S3 paths and keys should
     * be visible to your user and how you want to make them visible. You will need to
     * specify the "<code>Entry</code>" and "<code>Target</code>" pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 path. If you only specify a target, it will be displayed as
     * is. You will need to also make sure that your IAM role provides access to paths
     * in <code>Target</code>. The following is an example.</p> <p> <code>'[
     * "/bucket2/documentation", { "Entry": "your-personal-report.pdf", "Target":
     * "/bucket3/customized-reports/${transfer:UserName}.pdf" } ]'</code> </p> <p>In
     * most cases, you can use this value instead of the scope-down policy to lock your
     * user down to the designated home directory ("chroot"). To do this, you can set
     * <code>Entry</code> to '/' and set <code>Target</code> to the HomeDirectory
     * parameter value.</p>  <p>If the target of a logical directory entry does
     * not exist in Amazon S3, the entry will be ignored. As a workaround, you can use
     * the Amazon S3 API to create 0 byte objects as place holders for your directory.
     * If using the CLI, use the <code>s3api</code> call instead of <code>s3</code> so
     * you can use the put-object operation. For example, you use the following:
     * <code>aws s3api put-object --bucket bucketname --key path/to/folder/</code>.
     * Make sure that the end of the key name ends in a / for it to be considered a
     * folder.</p> 
     */
    inline void SetHomeDirectoryMappings(const Aws::Vector<HomeDirectoryMapEntry>& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings = value; }

    /**
     * <p>Logical directory mappings that specify what Amazon S3 paths and keys should
     * be visible to your user and how you want to make them visible. You will need to
     * specify the "<code>Entry</code>" and "<code>Target</code>" pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 path. If you only specify a target, it will be displayed as
     * is. You will need to also make sure that your IAM role provides access to paths
     * in <code>Target</code>. The following is an example.</p> <p> <code>'[
     * "/bucket2/documentation", { "Entry": "your-personal-report.pdf", "Target":
     * "/bucket3/customized-reports/${transfer:UserName}.pdf" } ]'</code> </p> <p>In
     * most cases, you can use this value instead of the scope-down policy to lock your
     * user down to the designated home directory ("chroot"). To do this, you can set
     * <code>Entry</code> to '/' and set <code>Target</code> to the HomeDirectory
     * parameter value.</p>  <p>If the target of a logical directory entry does
     * not exist in Amazon S3, the entry will be ignored. As a workaround, you can use
     * the Amazon S3 API to create 0 byte objects as place holders for your directory.
     * If using the CLI, use the <code>s3api</code> call instead of <code>s3</code> so
     * you can use the put-object operation. For example, you use the following:
     * <code>aws s3api put-object --bucket bucketname --key path/to/folder/</code>.
     * Make sure that the end of the key name ends in a / for it to be considered a
     * folder.</p> 
     */
    inline void SetHomeDirectoryMappings(Aws::Vector<HomeDirectoryMapEntry>&& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings = std::move(value); }

    /**
     * <p>Logical directory mappings that specify what Amazon S3 paths and keys should
     * be visible to your user and how you want to make them visible. You will need to
     * specify the "<code>Entry</code>" and "<code>Target</code>" pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 path. If you only specify a target, it will be displayed as
     * is. You will need to also make sure that your IAM role provides access to paths
     * in <code>Target</code>. The following is an example.</p> <p> <code>'[
     * "/bucket2/documentation", { "Entry": "your-personal-report.pdf", "Target":
     * "/bucket3/customized-reports/${transfer:UserName}.pdf" } ]'</code> </p> <p>In
     * most cases, you can use this value instead of the scope-down policy to lock your
     * user down to the designated home directory ("chroot"). To do this, you can set
     * <code>Entry</code> to '/' and set <code>Target</code> to the HomeDirectory
     * parameter value.</p>  <p>If the target of a logical directory entry does
     * not exist in Amazon S3, the entry will be ignored. As a workaround, you can use
     * the Amazon S3 API to create 0 byte objects as place holders for your directory.
     * If using the CLI, use the <code>s3api</code> call instead of <code>s3</code> so
     * you can use the put-object operation. For example, you use the following:
     * <code>aws s3api put-object --bucket bucketname --key path/to/folder/</code>.
     * Make sure that the end of the key name ends in a / for it to be considered a
     * folder.</p> 
     */
    inline UpdateUserRequest& WithHomeDirectoryMappings(const Aws::Vector<HomeDirectoryMapEntry>& value) { SetHomeDirectoryMappings(value); return *this;}

    /**
     * <p>Logical directory mappings that specify what Amazon S3 paths and keys should
     * be visible to your user and how you want to make them visible. You will need to
     * specify the "<code>Entry</code>" and "<code>Target</code>" pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 path. If you only specify a target, it will be displayed as
     * is. You will need to also make sure that your IAM role provides access to paths
     * in <code>Target</code>. The following is an example.</p> <p> <code>'[
     * "/bucket2/documentation", { "Entry": "your-personal-report.pdf", "Target":
     * "/bucket3/customized-reports/${transfer:UserName}.pdf" } ]'</code> </p> <p>In
     * most cases, you can use this value instead of the scope-down policy to lock your
     * user down to the designated home directory ("chroot"). To do this, you can set
     * <code>Entry</code> to '/' and set <code>Target</code> to the HomeDirectory
     * parameter value.</p>  <p>If the target of a logical directory entry does
     * not exist in Amazon S3, the entry will be ignored. As a workaround, you can use
     * the Amazon S3 API to create 0 byte objects as place holders for your directory.
     * If using the CLI, use the <code>s3api</code> call instead of <code>s3</code> so
     * you can use the put-object operation. For example, you use the following:
     * <code>aws s3api put-object --bucket bucketname --key path/to/folder/</code>.
     * Make sure that the end of the key name ends in a / for it to be considered a
     * folder.</p> 
     */
    inline UpdateUserRequest& WithHomeDirectoryMappings(Aws::Vector<HomeDirectoryMapEntry>&& value) { SetHomeDirectoryMappings(std::move(value)); return *this;}

    /**
     * <p>Logical directory mappings that specify what Amazon S3 paths and keys should
     * be visible to your user and how you want to make them visible. You will need to
     * specify the "<code>Entry</code>" and "<code>Target</code>" pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 path. If you only specify a target, it will be displayed as
     * is. You will need to also make sure that your IAM role provides access to paths
     * in <code>Target</code>. The following is an example.</p> <p> <code>'[
     * "/bucket2/documentation", { "Entry": "your-personal-report.pdf", "Target":
     * "/bucket3/customized-reports/${transfer:UserName}.pdf" } ]'</code> </p> <p>In
     * most cases, you can use this value instead of the scope-down policy to lock your
     * user down to the designated home directory ("chroot"). To do this, you can set
     * <code>Entry</code> to '/' and set <code>Target</code> to the HomeDirectory
     * parameter value.</p>  <p>If the target of a logical directory entry does
     * not exist in Amazon S3, the entry will be ignored. As a workaround, you can use
     * the Amazon S3 API to create 0 byte objects as place holders for your directory.
     * If using the CLI, use the <code>s3api</code> call instead of <code>s3</code> so
     * you can use the put-object operation. For example, you use the following:
     * <code>aws s3api put-object --bucket bucketname --key path/to/folder/</code>.
     * Make sure that the end of the key name ends in a / for it to be considered a
     * folder.</p> 
     */
    inline UpdateUserRequest& AddHomeDirectoryMappings(const HomeDirectoryMapEntry& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings.push_back(value); return *this; }

    /**
     * <p>Logical directory mappings that specify what Amazon S3 paths and keys should
     * be visible to your user and how you want to make them visible. You will need to
     * specify the "<code>Entry</code>" and "<code>Target</code>" pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 path. If you only specify a target, it will be displayed as
     * is. You will need to also make sure that your IAM role provides access to paths
     * in <code>Target</code>. The following is an example.</p> <p> <code>'[
     * "/bucket2/documentation", { "Entry": "your-personal-report.pdf", "Target":
     * "/bucket3/customized-reports/${transfer:UserName}.pdf" } ]'</code> </p> <p>In
     * most cases, you can use this value instead of the scope-down policy to lock your
     * user down to the designated home directory ("chroot"). To do this, you can set
     * <code>Entry</code> to '/' and set <code>Target</code> to the HomeDirectory
     * parameter value.</p>  <p>If the target of a logical directory entry does
     * not exist in Amazon S3, the entry will be ignored. As a workaround, you can use
     * the Amazon S3 API to create 0 byte objects as place holders for your directory.
     * If using the CLI, use the <code>s3api</code> call instead of <code>s3</code> so
     * you can use the put-object operation. For example, you use the following:
     * <code>aws s3api put-object --bucket bucketname --key path/to/folder/</code>.
     * Make sure that the end of the key name ends in a / for it to be considered a
     * folder.</p> 
     */
    inline UpdateUserRequest& AddHomeDirectoryMappings(HomeDirectoryMapEntry&& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>Allows you to supply a scope-down policy for your user so you can use the
     * same IAM role across multiple users. The policy scopes down user access to
     * portions of your Amazon S3 bucket. Variables you can use inside this policy
     * include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>  <p>For scope-down policies, AWS
     * Transfer Family stores the policy as a JSON blob, instead of the Amazon Resource
     * Name (ARN) of the policy. You save the policy as a JSON blob and pass it in the
     * <code>Policy</code> argument.</p> <p>For an example of a scope-down policy, see
     * <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/users.html#users-policies-scope-down">Creating
     * a scope-down policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>AWS Security Token Service API Reference</i>.</p> 
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>Allows you to supply a scope-down policy for your user so you can use the
     * same IAM role across multiple users. The policy scopes down user access to
     * portions of your Amazon S3 bucket. Variables you can use inside this policy
     * include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>  <p>For scope-down policies, AWS
     * Transfer Family stores the policy as a JSON blob, instead of the Amazon Resource
     * Name (ARN) of the policy. You save the policy as a JSON blob and pass it in the
     * <code>Policy</code> argument.</p> <p>For an example of a scope-down policy, see
     * <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/users.html#users-policies-scope-down">Creating
     * a scope-down policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>AWS Security Token Service API Reference</i>.</p> 
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>Allows you to supply a scope-down policy for your user so you can use the
     * same IAM role across multiple users. The policy scopes down user access to
     * portions of your Amazon S3 bucket. Variables you can use inside this policy
     * include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>  <p>For scope-down policies, AWS
     * Transfer Family stores the policy as a JSON blob, instead of the Amazon Resource
     * Name (ARN) of the policy. You save the policy as a JSON blob and pass it in the
     * <code>Policy</code> argument.</p> <p>For an example of a scope-down policy, see
     * <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/users.html#users-policies-scope-down">Creating
     * a scope-down policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>AWS Security Token Service API Reference</i>.</p> 
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>Allows you to supply a scope-down policy for your user so you can use the
     * same IAM role across multiple users. The policy scopes down user access to
     * portions of your Amazon S3 bucket. Variables you can use inside this policy
     * include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>  <p>For scope-down policies, AWS
     * Transfer Family stores the policy as a JSON blob, instead of the Amazon Resource
     * Name (ARN) of the policy. You save the policy as a JSON blob and pass it in the
     * <code>Policy</code> argument.</p> <p>For an example of a scope-down policy, see
     * <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/users.html#users-policies-scope-down">Creating
     * a scope-down policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>AWS Security Token Service API Reference</i>.</p> 
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>Allows you to supply a scope-down policy for your user so you can use the
     * same IAM role across multiple users. The policy scopes down user access to
     * portions of your Amazon S3 bucket. Variables you can use inside this policy
     * include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>  <p>For scope-down policies, AWS
     * Transfer Family stores the policy as a JSON blob, instead of the Amazon Resource
     * Name (ARN) of the policy. You save the policy as a JSON blob and pass it in the
     * <code>Policy</code> argument.</p> <p>For an example of a scope-down policy, see
     * <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/users.html#users-policies-scope-down">Creating
     * a scope-down policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>AWS Security Token Service API Reference</i>.</p> 
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>Allows you to supply a scope-down policy for your user so you can use the
     * same IAM role across multiple users. The policy scopes down user access to
     * portions of your Amazon S3 bucket. Variables you can use inside this policy
     * include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>  <p>For scope-down policies, AWS
     * Transfer Family stores the policy as a JSON blob, instead of the Amazon Resource
     * Name (ARN) of the policy. You save the policy as a JSON blob and pass it in the
     * <code>Policy</code> argument.</p> <p>For an example of a scope-down policy, see
     * <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/users.html#users-policies-scope-down">Creating
     * a scope-down policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>AWS Security Token Service API Reference</i>.</p> 
     */
    inline UpdateUserRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>Allows you to supply a scope-down policy for your user so you can use the
     * same IAM role across multiple users. The policy scopes down user access to
     * portions of your Amazon S3 bucket. Variables you can use inside this policy
     * include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>  <p>For scope-down policies, AWS
     * Transfer Family stores the policy as a JSON blob, instead of the Amazon Resource
     * Name (ARN) of the policy. You save the policy as a JSON blob and pass it in the
     * <code>Policy</code> argument.</p> <p>For an example of a scope-down policy, see
     * <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/users.html#users-policies-scope-down">Creating
     * a scope-down policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>AWS Security Token Service API Reference</i>.</p> 
     */
    inline UpdateUserRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>Allows you to supply a scope-down policy for your user so you can use the
     * same IAM role across multiple users. The policy scopes down user access to
     * portions of your Amazon S3 bucket. Variables you can use inside this policy
     * include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>  <p>For scope-down policies, AWS
     * Transfer Family stores the policy as a JSON blob, instead of the Amazon Resource
     * Name (ARN) of the policy. You save the policy as a JSON blob and pass it in the
     * <code>Policy</code> argument.</p> <p>For an example of a scope-down policy, see
     * <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/users.html#users-policies-scope-down">Creating
     * a scope-down policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>AWS Security Token Service API Reference</i>.</p> 
     */
    inline UpdateUserRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    
    inline const PosixProfile& GetPosixProfile() const{ return m_posixProfile; }

    
    inline bool PosixProfileHasBeenSet() const { return m_posixProfileHasBeenSet; }

    
    inline void SetPosixProfile(const PosixProfile& value) { m_posixProfileHasBeenSet = true; m_posixProfile = value; }

    
    inline void SetPosixProfile(PosixProfile&& value) { m_posixProfileHasBeenSet = true; m_posixProfile = std::move(value); }

    
    inline UpdateUserRequest& WithPosixProfile(const PosixProfile& value) { SetPosixProfile(value); return *this;}

    
    inline UpdateUserRequest& WithPosixProfile(PosixProfile&& value) { SetPosixProfile(std::move(value)); return *this;}


    /**
     * <p>The IAM role that controls your users' access to your Amazon S3 bucket. The
     * policies attached to this role will determine the level of access you want to
     * provide your users when transferring files into and out of your Amazon S3 bucket
     * or buckets. The IAM role should also contain a trust relationship that allows
     * the server to access your resources when servicing your users' transfer
     * requests.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The IAM role that controls your users' access to your Amazon S3 bucket. The
     * policies attached to this role will determine the level of access you want to
     * provide your users when transferring files into and out of your Amazon S3 bucket
     * or buckets. The IAM role should also contain a trust relationship that allows
     * the server to access your resources when servicing your users' transfer
     * requests.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The IAM role that controls your users' access to your Amazon S3 bucket. The
     * policies attached to this role will determine the level of access you want to
     * provide your users when transferring files into and out of your Amazon S3 bucket
     * or buckets. The IAM role should also contain a trust relationship that allows
     * the server to access your resources when servicing your users' transfer
     * requests.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The IAM role that controls your users' access to your Amazon S3 bucket. The
     * policies attached to this role will determine the level of access you want to
     * provide your users when transferring files into and out of your Amazon S3 bucket
     * or buckets. The IAM role should also contain a trust relationship that allows
     * the server to access your resources when servicing your users' transfer
     * requests.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The IAM role that controls your users' access to your Amazon S3 bucket. The
     * policies attached to this role will determine the level of access you want to
     * provide your users when transferring files into and out of your Amazon S3 bucket
     * or buckets. The IAM role should also contain a trust relationship that allows
     * the server to access your resources when servicing your users' transfer
     * requests.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The IAM role that controls your users' access to your Amazon S3 bucket. The
     * policies attached to this role will determine the level of access you want to
     * provide your users when transferring files into and out of your Amazon S3 bucket
     * or buckets. The IAM role should also contain a trust relationship that allows
     * the server to access your resources when servicing your users' transfer
     * requests.</p>
     */
    inline UpdateUserRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The IAM role that controls your users' access to your Amazon S3 bucket. The
     * policies attached to this role will determine the level of access you want to
     * provide your users when transferring files into and out of your Amazon S3 bucket
     * or buckets. The IAM role should also contain a trust relationship that allows
     * the server to access your resources when servicing your users' transfer
     * requests.</p>
     */
    inline UpdateUserRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role that controls your users' access to your Amazon S3 bucket. The
     * policies attached to this role will determine the level of access you want to
     * provide your users when transferring files into and out of your Amazon S3 bucket
     * or buckets. The IAM role should also contain a trust relationship that allows
     * the server to access your resources when servicing your users' transfer
     * requests.</p>
     */
    inline UpdateUserRequest& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline UpdateUserRequest& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline UpdateUserRequest& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>A system-assigned unique identifier for a server instance that the user
     * account is assigned to.</p>
     */
    inline UpdateUserRequest& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>A unique string that identifies a user and is associated with a server as
     * specified by the <code>ServerId</code>. This user name must be a minimum of 3
     * and a maximum of 100 characters long. The following are valid characters: a-z,
     * A-Z, 0-9, underscore '_', hyphen '-', period '.', and at sign '@'. The user name
     * can't start with a hyphen, period, or at sign.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>A unique string that identifies a user and is associated with a server as
     * specified by the <code>ServerId</code>. This user name must be a minimum of 3
     * and a maximum of 100 characters long. The following are valid characters: a-z,
     * A-Z, 0-9, underscore '_', hyphen '-', period '.', and at sign '@'. The user name
     * can't start with a hyphen, period, or at sign.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>A unique string that identifies a user and is associated with a server as
     * specified by the <code>ServerId</code>. This user name must be a minimum of 3
     * and a maximum of 100 characters long. The following are valid characters: a-z,
     * A-Z, 0-9, underscore '_', hyphen '-', period '.', and at sign '@'. The user name
     * can't start with a hyphen, period, or at sign.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>A unique string that identifies a user and is associated with a server as
     * specified by the <code>ServerId</code>. This user name must be a minimum of 3
     * and a maximum of 100 characters long. The following are valid characters: a-z,
     * A-Z, 0-9, underscore '_', hyphen '-', period '.', and at sign '@'. The user name
     * can't start with a hyphen, period, or at sign.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>A unique string that identifies a user and is associated with a server as
     * specified by the <code>ServerId</code>. This user name must be a minimum of 3
     * and a maximum of 100 characters long. The following are valid characters: a-z,
     * A-Z, 0-9, underscore '_', hyphen '-', period '.', and at sign '@'. The user name
     * can't start with a hyphen, period, or at sign.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>A unique string that identifies a user and is associated with a server as
     * specified by the <code>ServerId</code>. This user name must be a minimum of 3
     * and a maximum of 100 characters long. The following are valid characters: a-z,
     * A-Z, 0-9, underscore '_', hyphen '-', period '.', and at sign '@'. The user name
     * can't start with a hyphen, period, or at sign.</p>
     */
    inline UpdateUserRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>A unique string that identifies a user and is associated with a server as
     * specified by the <code>ServerId</code>. This user name must be a minimum of 3
     * and a maximum of 100 characters long. The following are valid characters: a-z,
     * A-Z, 0-9, underscore '_', hyphen '-', period '.', and at sign '@'. The user name
     * can't start with a hyphen, period, or at sign.</p>
     */
    inline UpdateUserRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies a user and is associated with a server as
     * specified by the <code>ServerId</code>. This user name must be a minimum of 3
     * and a maximum of 100 characters long. The following are valid characters: a-z,
     * A-Z, 0-9, underscore '_', hyphen '-', period '.', and at sign '@'. The user name
     * can't start with a hyphen, period, or at sign.</p>
     */
    inline UpdateUserRequest& WithUserName(const char* value) { SetUserName(value); return *this;}

  private:

    Aws::String m_homeDirectory;
    bool m_homeDirectoryHasBeenSet;

    HomeDirectoryType m_homeDirectoryType;
    bool m_homeDirectoryTypeHasBeenSet;

    Aws::Vector<HomeDirectoryMapEntry> m_homeDirectoryMappings;
    bool m_homeDirectoryMappingsHasBeenSet;

    Aws::String m_policy;
    bool m_policyHasBeenSet;

    PosixProfile m_posixProfile;
    bool m_posixProfileHasBeenSet;

    Aws::String m_role;
    bool m_roleHasBeenSet;

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet;

    Aws::String m_userName;
    bool m_userNameHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
